class chessPiece{
  public:
  chessPiece(String, String);
  void ChangeCoords(String);
  
  private:
  String coords;
  String pieceNum;
};

String newCoords;
String inputString = "";
bool stringComplete = false;

void setup() {
  Serial.begin(9600);
  inputString.reserve(200);
}

void loop() {
  int firstComma;
  int secondComma;
  if (stringComplete)
  {
    firstComma = inputString.indexOf(',');
    secondComma = inputString.indexOf(',', firstComma + 1);
  }

  if (firstComma > 0 && secondComma > firstComma)
  {
    String startCoord = inputString.substring(0, firstComma);
    newCoords = inputString.substring(firstComma + 1, secondComma);
    String chessType = inputString.substring(secondComma + 1);

    chessPiece *testPiece = new chessPiece(startCoord, chessType);

    testPiece->ChangeCoords(newCoords);
  }
  else
  {
    Serial.println("Error: Invalid command format!");
  }
  inputString = "";
  stringComplete = false;
  // if (Serial.available())
  // {
  //   char data = Serial.read();
  //   Serial.print("Arduino Recieved:\n");
  //   Serial.println(data);
  //   delay(500);
  // }
}

void serialEvent()
{
  while (Serial.available())
  {
    char inChar = (char)Serial.read();
    if (inChar == '\n')
    {
      stringComplete = true;
    }
    else
    {
      inputString += inChar;
    }
  }
}

chessPiece::chessPiece(String initCoords, String pieceNumber)
{
  coords = initCoords;
  pieceNum = pieceNumber;
}

void chessPiece::ChangeCoords(String endCoords)
{
  Serial.println("Old Coordinates: ");
  Serial.println(coords);
  Serial.println("\n");
  coords = endCoords;
  Serial.println("New Coordinates: ");
  Serial.println(coords);
  Serial.println("\n");

  Serial.println("done\n");
}