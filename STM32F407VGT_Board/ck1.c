#include "stm32f4xx.h" //to enable HAL drivers
#include "stm32f4xx_hal.h" // to utilize available APIs provided by KEIL
#include <Board_LED.h> //to use predefined libraries for on board LEDs
#include "stdint.h" //to use int data type
#include <stdbool.h> // to include bool data type

 unsigned int j;
 bool togg=0;
 

void delay()
{
if(togg==1)
{togg=0;}
else
	togg=1;
	for(j=0;j<400000;j++);  
}

int main()
{
    // initialize the system -memory, external memory controller
     SystemInit();
     

    // all LED initialize
    LED_Initialize();//Initialize Led0, Led1, Led2, Led3 connected to PD12,PD13,PD14,PD15 as outputs
	
    while(1)
    {
       
       LED_Off(0);//Turn of Led0
       LED_Off(1);
       LED_Off(2);
       LED_Off(3);
       delay(); //some delay
			 LED_On(0);
       delay();
			 LED_On(0);
			 //delay();
			 //LED_On(2);
			 //delay();
			 //LED_On(3);
			 //delay();
    }
}
 
