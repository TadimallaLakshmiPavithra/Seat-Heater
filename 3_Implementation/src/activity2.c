/**
 * @file activity2.c
 * @author PAVITHRA (you@domain.com)
 * @brief By ADC analog values to digital values
 * @version 0.1
 * @date 2021-09-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<avr/io.h>
#include"activity2.h"
/**
 * @brief function to initialise the analog to digital converter (ADC)
 * 
 */
void InitADC()
{
    ADMUX=(1<<REFS0);//Aref=AVcc;
    ADCSRA= (1<<ADEN)|(7<<ADPS0);
}

uint16_t ReadADC(uint8_t ch)
{
    ADMUX&=0xf8;
    ch=ch&0b00000111;
    ADMUX|=ch;

    ADCSRA|=(1<<ADSC);
    while(!(ADCSRA & (1<<ADIF)));
    ADCSRA|=(1<<ADIF);
    return(ADC);
}
    InitADC();
    uint16_t temp;
    while(1){
    temp=ReadADC(0);
    _delay_ms(2000);
}
