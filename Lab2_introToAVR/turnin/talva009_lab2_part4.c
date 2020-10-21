/*	Author: talva009
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
	DDRA = 0x00; PORTA = 0x00;
	DDRB = 0x00; PORTB = 0x00;
	DDRC = 0x00; PORTC = 0x00;
	DDRD = 0xFF; PORTD = 0x00;
    /* Insert your solution below */
    while (1) {

	if((PINA + PINB + PINC) >= 140){
		PORTD = PORTD | 0X01;
	
		if((PINA - PINC) > 80){
		PORTD = PORTD | 0X02;
		}
	}
	else{
		PORTD = (PINA + PINB + PINC) & 0xFC;
	}
    }
    return 1;
}
