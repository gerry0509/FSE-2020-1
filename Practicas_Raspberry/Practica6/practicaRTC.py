import time
import datetime
import csv
import os
import sys
import SDL_DS1307

ds1307 = SDL_DS1307.SDL_DS1307(1,0x68)
#ds1307.write_now()

def escribir(s,n):
	path="/media/pi/3493-5869"
	if not os.path.exists(path):
		print("No es posible escribir\n")
		sys.exit()
	file=path+"/"+s
	archivo=open(file+".csv", "w")
	for i in range (n):
		archivo.write("Raspberry:\t" +  time.strftime("%Y-%m-%d %H:%M:%S\n"))
		archivo.write("DS1307:\t%s" % ds1307.read_datetime()+"\n")
		time.sleep(1)

s = raw_input("Introduce el nombre del archivo\n")
n = input("Cuantas veces quieres la hora\n")
escribir(s,n)
print("listo")
