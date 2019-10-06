# -*- coding: cp1252 -*-
import csv

def escribir(s, n):

    
    archivo=open(s+".csv", "w")
    for i in range(n):

        d=str(i)
        archivo.write(d+" ")
        archivo.write(",")
        archivo.write("Hola USB")
        archivo.write(" ")
        archivo.write(",")
        archivo.write("data "+d)
        archivo.write("\n")


    print("La información se ha guardado en el archivo\n")
    archivo.close()
        
        
    
s= raw_input("Introduce el nombre del archivo\n")
n= input("Introduce un numero\n")
escribir(s,n)
print("listo")
