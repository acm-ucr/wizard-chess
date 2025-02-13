import speech_recognition as sr
import re

recognizer = sr.Recognizer()
def listen_for_commands():
   try:
      with sr.Microphone() as source:
         recognizer.adjust_for_ambient_noise(source, duration=0.5)
         audio = recognizer.listen(source, phrase_time_limit=None)
         text = recognizer.recognize_google(audio)
         print("text recognized\n")
         return text

   except sr.RequestError as e:
      print("Could not request results: {0}".format(e))

   except sr.UnknownValueError:
      print("Unknown error occurred")

   
   return

# Main algorithm that parses the userInput data as key data of chess_piece and locations
def parsedData(userInput):
    if (userInput == None):
        error = {"piece" : "ERROR"}
        return error
    chess_piece = re.findall(r"(pawn|queen|rook|bishop|knight|king|night|Pawn|Queen|Rook|Bishop|Knight|King|Night)", userInput)
    locations = re.findall(r"[A-H][1-8]", userInput)
    print("PARSED DATA: ", chess_piece, locations)
    file_path = 'speech.txt'
    if(len(locations) == 2): 
        res = ' '.join(locations)
        print(res)
        file = open(file_path, 'w')
        file.write(res) 
    else:
        error = {"piece" : "ERROR"}
        file = open(file_path, 'w')
        file.write("ERROR")
        return error

# Main program
while (1):
    # userInput = input("Say \"hey wizard\" for me to listen. Say \"stop\" to stop giving me commands: ") # possibly displayed on LCD
    userInput = listen_for_commands()
    while userInput == "hey wizard": # a step of authentication to make sure that you are asking it to do something
        print("Listening: \n") # this would be input from the microphone and possibly displayed on LCD
        userInput = listen_for_commands()
        print("Original Response: ")
        print(userInput)
        print("\n")
        resultingData = parsedData(userInput) # stores a hashmap with key data
        # if (resultingData["piece"] != "ERROR"):
        #     print("Moving [" + resultingData["piece"] + "] from position [" + resultingData["start"] + "] to [" + resultingData["end"] + "]")
        # else:
        #     print("Invalid input. You might have referred to one or more coordinate/piece.")