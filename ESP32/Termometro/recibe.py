import serial
import os,time
#enable serial communication
port=serial.Serial("/dev/ttyS0",baudrate=115200,timeout=1)
while 1:
	read=port.read(45)
	port.write(read)
	print read
port.close()
