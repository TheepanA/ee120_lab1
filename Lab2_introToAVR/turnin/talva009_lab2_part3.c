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
	DDRA = 0x00; PORTA = 0xFF;
	DDRC = 0xFF; PORTC = 0x00;
    /* Insert your solution below */
    while (1) {
	unsigned char cntavail =((PINA & 0x01)) + 
				((PINA & 0x02) >> 1) + 
				((PINA & 0x04) >> 2) +
				((PINA & 0x08) >> 3);
	PORTC = 4 - cntavail;
	if(PORTC == 0){
	   PORTC = PORTC | 0x80;
	}

    }
    return 1;
}
