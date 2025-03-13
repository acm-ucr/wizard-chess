import serial
import time

# start serial write
ser = serial.Serial('/dev/ttyACM0', 9600, timeout=1)

time.sleep(2)

# helper function to read each content in a single line
def read_until(file, delimiter):
    data = ""
    while True:
        chunk = file.read(1)
        if not chunk:
            break
        data += chunk
        if delimiter in data:
            return data
    return data 

# crucial variables
id_num = ""
time_stamp = 0
origCoord = ""
newCoord = ""
is_capture = False
castle_check = ""
promotion_check = ""


file = open("qt.txt")

# reading the content in "qt.txt" file 
with open("qt.txt", "r") as file:
    id_num = read.until(file, " ");
    time_stamp = read.until(file, " ");
    origCoord = read.until(file, " ");
    newCoord = read.until(file, " ");
    is_capture = read.until(file, " ");
    castle_check = read.until(file, " ");
    promotion_check = read.until(file, " ");
    
sendLine = id_num + '#'
sendLine += time_stamp + '#'
sendLine += origCoord + '#'
sendLine += newCoord + '#'
sendLine += is_capture + '#'
sendLine += castle_check + '#'
sendLine += promotion_check

ser.write((str(sendLine) + '\n').encode('utf-8'))

# personal confirmation (to be deleted)
# print(f"Arduino response: {response}")

# writing to the file
with open("qt.txt", "a") as file:
    file.write("\n" + response + "\n")

ser.close()

