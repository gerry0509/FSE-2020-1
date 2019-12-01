#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "sdkconfig.h"

/* Can use project configuration menu (idf.py menuconfig) to choose the GPIO to blink,
   or you can edit the following line and set a number here.
*/

#define LED0 GPIO_NUM_33
#define LED1 GPIO_NUM_25
#define LED2 GPIO_NUM_26
#define LED3 GPIO_NUM_27
#define SENSOR_GPIO GPIO_NUM_36

void app_main(void)
{
    /* Configure the IOMUX register for pad BLINK_GPIO (some pads are
       muxed to GPIO on reset already, but some default to other
       functions and need to be switched to GPIO. Consult the
       Technical Reference for a list of pads and their default
       functions.)
    */
    gpio_pad_select_gpio(SENSOR_GPIO);
    gpio_pad_select_gpio(LED0);
    gpio_pad_select_gpio(LED1);
    gpio_pad_select_gpio(LED2);
    gpio_pad_select_gpio(LED2);

    /* Set the GPIO as a push/pull output */
    gpio_set_direction(SENSOR_GPIO, GPIO_MODE_INPUT);
    gpio_set_direction(LED0, GPIO_MODE_OUTPUT);
    gpio_set_direction(LED1, GPIO_MODE_OUTPUT);
    gpio_set_direction(LED2, GPIO_MODE_OUTPUT);
    gpio_set_direction(LED3, GPIO_MODE_OUTPUT);
    
     gpio_set_level(LED0, 0);
     gpio_set_level(LED1, 0);
     gpio_set_level(LED2, 0);
     gpio_set_level(LED3, 0);

    int aux=0;

  while(1) {

    while(aux<=10){

      if(gpio_get_level(SENSOR_GPIO)==1){

        vTaskDelay(100 / portTICK_PERIOD_MS);


       }else if(gpio_get_level(SENSOR_GPIO)==0){

           aux=aux+1;
           vTaskDelay(100 / portTICK_PERIOD_MS);

          //Número 1
        
           if(aux==1){

		     gpio_set_level(LED0, 1);
		     gpio_set_level(LED1, 0);
		     gpio_set_level(LED2, 0);
		     gpio_set_level(LED3, 0);
              vTaskDelay(100 / portTICK_PERIOD_MS);

           }else if(aux==2){
            //Número 2

		     gpio_set_level(LED0, 0);
		     gpio_set_level(LED1, 1);
		     gpio_set_level(LED2, 0);
		     gpio_set_level(LED3, 0);
              vTaskDelay(100 / portTICK_PERIOD_MS);

           }else if(aux==3){
            //Número 3

		     gpio_set_level(LED0, 1);
		     gpio_set_level(LED1, 1);
		     gpio_set_level(LED2, 0);
		     gpio_set_level(LED3, 0);
              vTaskDelay(100 / portTICK_PERIOD_MS);

           }else if(aux==4){
            //Número 4
		     gpio_set_level(LED0, 0);
		     gpio_set_level(LED1, 0);
		     gpio_set_level(LED2, 1);
		     gpio_set_level(LED3, 0);
              vTaskDelay(100 / portTICK_PERIOD_MS);

          }else if(aux==5){
            //Número 5

		     gpio_set_level(LED0, 1);
		     gpio_set_level(LED1, 0);
		     gpio_set_level(LED2, 1);
		     gpio_set_level(LED3, 0);
              vTaskDelay(100 / portTICK_PERIOD_MS);
           }else if(aux==6){
            //Número 6

		     gpio_set_level(LED0, 0);
		     gpio_set_level(LED1, 1);
		     gpio_set_level(LED2, 1);
		     gpio_set_level(LED3, 0);
              vTaskDelay(100 / portTICK_PERIOD_MS);

          }else if(aux==7){
            //Número 7

		     gpio_set_level(LED0, 1);
		     gpio_set_level(LED1, 1);
		     gpio_set_level(LED2, 1);
		     gpio_set_level(LED3, 0);
              vTaskDelay(100 / portTICK_PERIOD_MS);

          }else if(aux==8){
            //Número 8

		     gpio_set_level(LED0, 0);
		     gpio_set_level(LED1, 0);
		     gpio_set_level(LED2, 0);
		     gpio_set_level(LED3, 1);
              vTaskDelay(100 / portTICK_PERIOD_MS);

          }else if(aux==9){
            //Número 9

		     gpio_set_level(LED0, 1);
		     gpio_set_level(LED1, 0);
		     gpio_set_level(LED2, 0);
		     gpio_set_level(LED3, 1);
              vTaskDelay(100 / portTICK_PERIOD_MS);

          }else if(aux==10){
            //Número 10

		     gpio_set_level(LED0, 0);
		     gpio_set_level(LED1, 1);
		     gpio_set_level(LED2, 0);
		     gpio_set_level(LED3, 1);
              vTaskDelay(100 / portTICK_PERIOD_MS);

          }

        }

      }
	 vTaskDelay(100 / portTICK_PERIOD_MS);
     aux=0;
     gpio_set_level(LED0, 0);
     gpio_set_level(LED1, 0);
     gpio_set_level(LED2, 0);
     gpio_set_level(LED3, 0);

   }

}
