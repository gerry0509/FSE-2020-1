Pr�ctica 4. 
Laboratorio de Fundamentos de Sistemas Embebidos 

Integrantes: 
Arenas Olgu�n Jos� Gerardo 
Cort�s Reyes Tanya Cecilia 

Objetivos: Los objetivos de esta pr�ctica es la implementaci�n de una comunicaci�n
UART de nuestra tarjeta Raspberry Pi a nuestra computadora, as� como entender el 
funcionamiento de la misma. Para esto es necesario la debida configuraci�n 
de la tarjeta de tal manera que la comunicaci�n con la computadora 
(y con otros dispositivos, m�s adelante) se realice de manera exitosa. 

Desarrollo: 

Para esta pr�ctica se realiz� la correspondiente configuraci�n de la configuraci�n UART
con la computadora para que fuese posible el intercambio de datos por este medio. 
Esto con la intenci�n de ayudarnos con nuestro proyecto donde la comunicaci�n se hizo
de la ESP32 a la Raspberry y de la Raspberry a la computadora. 

Con los pasos que el profesor proporcion� en el documento de la pr�ctica fue m�s que 
suficiente para logar la configuraci�n y establecer la comunicaci�n entre ambos 
dispositivos, aunque habr�a que rescatar que se tiene que tomar muy en cuenta que 
es forzoso el dispositivo USB TTL debido a que trabaja con el voltaje buscamos (3.3 volts) 

En la pr�ctica se realizaron 2 ejercicios, el primero era mandar una cadena de la
Raspberry a la PC que se repitiera 15 veces, mientras que en el segundo 
se buscaba que que la PC enviara una cadena con caracteristicas espec�ficas
a la Raspberry Pi y una vez que esta �ltima recibiera el mensaje lo separase para 
posteriormente imprimirlo en pantalla. 

La implementaci�n de ambos c�digos fue relativamente sencillo debido a que Python nos 
permite la llamada a las funciones correspondientes para la escritura y la lectura a 
trav�s de una comunicaci�n UART. 

Link del video: 

https://youtu.be/q1iwJuaaAxg

