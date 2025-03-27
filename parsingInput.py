# ACM Forge (2024) - Vignesh Thondikulam
# This will help in parsing through the given input as key data that will help the machine to make decisions
# Example: if the command is "Hey move Pawn from G5 to D6," key data that is derived from this would be ["Pawn", "G5", "D6"] while ["Hey", "move", "from", "to", etc...] are filler words for this alogirthm
import re

# Main algorithm that parses the userInput data as key data of chess_piece and locations
def parsedData(userInput):
    chess_piece = re.findall(r"(pawn|queen|rook|bishop|knight|king)", userInput)
    locations = re.findall(r"[a-h][1-8]", userInput)
    print("PARSED DATA: ", chess_piece, locations)
    if(len(chess_piece + locations) == 3): 
        data = {"piece": chess_piece[0], "start": locations[0], "end": locations[1]}
        return data
    else:
        error = {"piece" : "ERROR"}
        return error

# Main program
userInput = input("Say \"hey wizard\" for me to listen. Say \"stop\" to stop giving me commands: ") # possibly displayed on LCD
while userInput == "hey wizard": # a step of authentication to make sure that you are asking it to do something
    userInput = input("Listening: ") # this would be input from the microphone and possibly displayed on LCD
    print("\nOriginal Response: " + userInput)
    print("\n")
    resultingData = parsedData(userInput) # stores a hashmap with key data
    if (resultingData["piece"] != "ERROR"):
        print("Moving [" + resultingData["piece"] + "] from position [" + resultingData["start"] + "] to [" + resultingData["end"] + "]")
    else:
        print("Invalid input. You might have referred to one or more coordinate/piece.")
