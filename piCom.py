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

# reading the content in "qt.txt" file 
with open("qt.txt", "r") as file:
    id_num         = read_until(file, " ")
    time_stamp     = read_until(file, " ")
    origCoord      = read_until(file, " ")
    newCoord       = read_until(file, " ")
    is_capture     = read_until(file, " ")
    castle_check   = read_until(file, " ")
    promotion_check= read_until(file, " ")

# build the line to send
sendLine = (
    id_num + "#" +
    time_stamp + "#" +
    origCoord + "#" +
    newCoord + "#" +
    is_capture + "#" +
    castle_check + "#" +
    promotion_check
)

# send to Arduino
ser.write((sendLine + "\n").encode("utf-8"))

# —— M I N O R   F I X ——  
# now actually read back whatever the Arduino sends (e.g. UID, time, status, etc.)
response = ser.readline().decode("utf-8").strip()
print(f"Arduino response: {response}")

# append Arduino response to qt.txt
with open("qt.txt", "a") as file:
    file.write("\n" + response + "\n")

ser.close()
