import serial
from time import sleep
ser= serial.Serial(port= '/dev/ttyS0',baudrate= 115200,parity=serial.PARITY_NONE,
stopbits=serial.STOPBITS_ONE,bytesize=serial.EIGHTBITS,timeout=1)
for i in range(16):
	a=repr(i)+": FSE 2020-1 Comunicacion UART RPi - FSE \n"
	ser.write(a)
	sleep(1)

