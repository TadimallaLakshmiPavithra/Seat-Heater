/**
 * @file activity1.c
 * @author PAVITHRA (you@domain.com)
 * @brief Seat Sense
 * @version 0.1
 * @date 2021-09-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "Activity1.h"

/**
 * @brief Seating Checking and connfiguring the seat, heater and LED
 * 
 */
int main(void){

    DDRD|=(1<<PD6);//set D6=1 for LED
    DDRD&=~(1<<PD4);//clear bit
    PORTD|=(1<<PD4);//set bit
    DDRD&=~(1<<PD5);//clear bit
    PORTD|=(1<<PD5);//set bit
    while(1)
    {
        if(!((PIND&(1<<PD4)) || (PIND&(1<<PD5)))) //switch press
        {
            PORTD|=(1<<PD6);
            _delay_ms(2000);
        }
        else{
            PORTD&=~(1<<PD6);
            _delay_ms(2000);
        }
    }


   return 0;
}
