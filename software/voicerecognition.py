import speech_recognition as sr
import re
import uuid
from datetime import datetime

recognizer = sr.Recognizer()
def listen_for_commands():
   try:
      with sr.Microphone() as source:
         #recognizer.adjust_for_ambient_noise(source, duration=0.5)
         audio = recognizer.listen(source, timeout = None, phrase_time_limit=None)
         text = recognizer.recognize_google(audio)
         print("text recognized\n")
         return text

   except sr.RequestError as e:
      print("Could not request results: {0}".format(e))

   except sr.UnknownValueError:
      print("Unknown error occurred")
   return

def promotionPawn():
   promoteBool = False
   promoted = ""
   while(promoteBool == False):
      print("Say the magic command") 
      promoteInput = listen_for_commands()
      while promoteInput == "level up": #say the command "level up" to begin promotion, then give any piece you want
         print("Listening: \n")
         promoteInput = listen_for_commands()
         if (promoteInput == None):
            error = {"piece" : "ERROR"}
         print("User Response for promotion:")
         print(promoteInput)
         print("\n")
         promote = re.findall(r"(queen|rook|bishop|knight|night|Queen|Rook|Bishop|Knight|Night)", promoteInput)
         if len(promote) == 1:
            promoteBool = True
            promoted = ' '.join(promote)
            promoted.lower()
            print(promoted)    
            promoted = convertToLetter(promoted)    
   return promoted

def convertToLetter(piece):
   if "night" in piece:
      letter = "n"
   elif "awn" in piece: 
      letter = "p"
   elif "ishop" in piece:
      letter = "b"
   elif "ook" in piece:
      letter = "r"
   elif "ueen" in piece:
      letter = "q"
   elif "ing" in piece:
      letter = "k"
   return letter

# Main algorithm that parses the userInput data as key data of chess_piece and locations
def parsedData(userInput):
   if (userInput == None):
      error = {"piece" : "ERROR"}
      return error
   chess_piece = re.findall(r"(pawn|queen|rook|bishop|knight|king|night|Pawn|Queen|Rook|Bishop|Knight|King|Night)", userInput)
   locations = re.findall(r"[A-H][1-8]", userInput)

   print("PARSED DATA: ", chess_piece, locations)
   file_path = 'speech.txt'

   if(len(chess_piece + locations) == 3):
      random_uuid = uuid.uuid4()
      random_uuid = str(random_uuid)
      current_time = datetime.now()
      current_time = current_time.strftime("%H:%M:%S")
      current_time = str(current_time)

      piece = ' '.join(chess_piece)
      piece = piece.lower()
      location = ' '.join(locations) #joins the locations list to a string
      location = location.lower() #make all lower case
      location = location.replace(" ", "") #remove spaces
      
      letter = convertToLetter(piece)
      res = random_uuid + " " + current_time + "$" + letter + " " + location

      if letter == 'p' and (location[3] == '8' or location[3] == '1'): #checking if piece was pawn and location is at the end of board
         print("Your Pawn is up for promotion!\n")
         print("Choose a Piece to Promote to: ")
         promote = promotionPawn()
         res = res + promote
      print(res)
      file = open(file_path, 'w')
      file.write(res)
      return res 
   else: #case of error
      error = {"piece" : "ERROR"}
      file = open(file_path, 'w')
      file.write("ERROR")
      return error

# Main program
while (1):
    #userInput = input("Say \"hey wizard\" for me to listen. Say \"stop\" to stop giving me commands: ") # possibly displayed on LCD
    print("Say the magic command")
    userInput = listen_for_commands()
    while userInput == "hey wizard": # a step of authentication to make sure that you are asking it to do something
        print("Listening: \n") # this would be input from the microphone and possibly displayed on LCD
        userInput = listen_for_commands()
        print("Original Response: ")
        print(userInput)
        print("\n")
        resultingData = parsedData(userInput) # stores a hashmap with key data
        print(resultingData)