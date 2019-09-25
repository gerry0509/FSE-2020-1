Práctica 4. 
Laboratorio de Fundamentos de Sistemas Embebidos 

Integrantes: 
Arenas Olguín José Gerardo 
Cortés Reyes Tanya Cecilia 

Objetivos: Los objetivos de esta práctica es la implementación de una comunicación
UART de nuestra tarjeta Raspberry Pi a nuestra computadora, así como entender el 
funcionamiento de la misma. Para esto es necesario la debida configuración 
de la tarjeta de tal manera que la comunicación con la computadora 
(y con otros dispositivos, más adelante) se realice de manera exitosa. 

Desarrollo: 

Para esta práctica se realizó la correspondiente configuración de la configuración UART
con la computadora para que fuese posible el intercambio de datos por este medio. 
Esto con la intención de ayudarnos con nuestro proyecto donde la comunicación se hizo
de la ESP32 a la Raspberry y de la Raspberry a la computadora. 

Con los pasos que el profesor proporcionó en el documento de la práctica fue más que 
suficiente para logar la configuración y establecer la comunicación entre ambos 
dispositivos, aunque habría que rescatar que se tiene que tomar muy en cuenta que 
es forzoso el dispositivo USB TTL debido a que trabaja con el voltaje buscamos (3.3 volts) 

En la práctica se realizaron 2 ejercicios, el primero era mandar una cadena de la
Raspberry a la PC que se repitiera 15 veces, mientras que en el segundo 
se buscaba que que la PC enviara una cadena con caracteristicas específicas
a la Raspberry Pi y una vez que esta última recibiera el mensaje lo separase para 
posteriormente imprimirlo en pantalla. 

La implementación de ambos códigos fue relativamente sencillo debido a que Python nos 
permite la llamada a las funciones correspondientes para la escritura y la lectura a 
través de una comunicación UART. 

Link del video: 

https://youtu.be/q1iwJuaaAxg

