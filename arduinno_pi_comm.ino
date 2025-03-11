
class chessPiece{
  public:
  chessPiece();
  chessPiece(String original_coords, String timeStamp, String captureCheck, String idChain);
  void dataReadAndConfigure();
  void ChangeCoords(String);
  String coordsGet();
  int timeGet();
  bool flagGet();
  String idGet();

  private:
  String coords;
  int time_Stamp;
  bool is_Captured;
  String id_String;
};

String inputLine;
String castleCheck;
String promotion;

void setup() {
  Serial.begin(9600);

}

void loop() {
  
  while (!Serial.available()) // doesn't spam through the loop so less load and less random assignments
  {
    delay(1000);  
  }

  chessPiece* coordChange = new chessPiece();
  inputLine = Serial.readString(); // takes in the message
  inputLine.trim();

  coordChange->dataReadAndConfigure();

  delete coordChange;
}

chessPiece::chessPiece()
{
  coords = "";
  time_Stamp = 0;
  is_Captured = false;
  id_String = "";
}

chessPiece::chessPiece(String original_coords, String timeStamp, String captureCheck, String idChain)
{
  coords = original_coords;
  time_Stamp = timeStamp.toInt();

  if (captureCheck == "True")
  {
    is_Captured = true;
  }
  else
  {
    is_Captured = false;
  }

  id_String = idChain;
}

void chessPiece::dataReadAndConfigure()
{
  int firstHash = inputLine.indexOf('#'); //finds the split for each value we want
  int secondHash = inputLine.indexOf('#', firstHash + 1); 
  int thirdHash = inputLine.indexOf('#', secondHash + 1);
  int fourthHash = inputLine.indexOf('#', thirdHash + 1);
  int fifthHash = inputLine.indexOf('#', fourthHash + 1);
  int sixthHash = inputLine.indexOf('#', fifthHash + 1);

  if (firstHash == -1 || secondHash == -1 || thirdHash == -1 || fourthHash == -1 || fifthHash == -1 || sixthHash == -1) { // error for testing
    Serial.println("Error: Invalid input format! Expected 4 hashes.");
    return;
  }

  String idNumber = inputLine.substring(0, firstHash); // assigning based on placement
  String time_stamp = inputLine.substring(firstHash + 1, secondHash);
  String origCoords = inputLine.substring(secondHash + 1, thirdHash);
  String newCoords = inputLine.substring(thirdHash + 1, fourthHash);
  String captureFlag = inputLine.substring(fourthHash + 1, fifthHash);
  castleCheck = inputLine.substring(fifthHash + 1, sixthHash);
  promotion = inputLine.substring(sixthHash + 1);

  idNumber.trim();
  time_stamp.trim();
  origCoords.trim(); // for cleaning up
  newCoords.trim();
  captureFlag.trim();
  castleCheck.trim();
  promotion.trim();

  if (origCoords == "" || time_stamp == 0 || idNumber == "") // final error testing, im paranoid
  {
    Serial.println("Didnt get information correctly this read");
    return;
  }

  chessPiece* changedPiece = new chessPiece(origCoords, time_stamp, captureFlag, idNumber); // makes a chesspiece object to change the coordinates of the given instructions
  changedPiece->ChangeCoords(newCoords);

  String finishCom = changedPiece->idGet();
  finishCom += " ";
  finishCom += String(changedPiece->timeGet());
  finishCom += " Done";

  Serial.println(finishCom); // writes back to the python

  delay(1000);

  delete changedPiece; // temporary line, clears up memory so the arduino doesnt die on us (hopefully :p)
}

void chessPiece::ChangeCoords(String nC)
{
  coords = nC;
}

String chessPiece::coordsGet()
{
  return coords;
}

int chessPiece::timeGet()
{
  return time_Stamp;
}

bool chessPiece::flagGet()
{
  return is_Captured;
}

String chessPiece::idGet()
{
  return id_String;
}
