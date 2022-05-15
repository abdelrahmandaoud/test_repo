/*
 * main.c
 *
 *  Created on: May 15, 2022
 *      Author: THE LAPTOP SHOP
 */
#include<avr/io.h>
#include<util/delay.h>

int main(void)
{
	int i=0;
	DDRA = 0b00001111 ; //PORT A0-output
	PORTA = 0b00000000 ;
	while(1) // super loop
	{
	 i=0;
	 while(i<4)
	 {
		 PORTA= PORTA |(1<<i);//PORT A0-high
		  _delay_ms(250);
		  PORTA = 0b00000000 ;//PORT A0-low

		  i++;
	 }
	 while(i>=0)
		 {
			 PORTA= PORTA |(1<<i);//PORT A0-high
			  _delay_ms(250);
			  PORTA = 0b00000000 ;//PORT A0-low
			  _delay_ms(250);
			  i--;
		 }


	}
}

