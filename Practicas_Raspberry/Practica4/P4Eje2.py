import serial
from time import sleep

ser= serial.Serial(
        port= '/dev/ttyS0',
        baudrate= 115200,
        parity=serial.PARITY_NONE,
        stopbits=serial.STOPBITS_ONE,
        bytesize=serial.EIGHTBITS,
        timeout=1
)
x=""
while 1:
	data= ser.read()
	if data != "":
		if data != "\n" :
			x=x+data
		elif data =="\n" :
			x=x+data
	elif data == "" and len(x)>0:
		if x[len(x)-1]=="\n":
		        x=x.split(",")
			x[3]=x[3].replace("\r\n","")
		if (int(x[0])>=0 and int(x[0])<=4095):
			entero=1
		else:
			entero=0
		if (int(x[2])==0 or int(x[2])==1):
			binario=1
		else:
			binario=0
		if float(x[3])>=0.0 and float(x[3])<=3.3:
			decimal=1
		else:
			decimal=0
		if(binario==1 and entero==1 and decimal==1):
			ser.write("Numero entero: "+x[0]+"\n")
		        sleep(1)
   			ser.write("Iniciales: "+x[1]+"\n")
       		 	sleep(1)
        		ser.write("Bandera: "+x[2]+"\n")
        		sleep(1)
        		ser.write("Voltaje: "+x[3]+"\n")
        		sleep(1)
		else:
			if  entero == 0:
				ser.write("Entero no valido\n")
			elif binario == 0:
				ser.write("Binario no valido\n")
			elif decimal == 0:
				ser.write("Decimal no valido\n")
		x=""
