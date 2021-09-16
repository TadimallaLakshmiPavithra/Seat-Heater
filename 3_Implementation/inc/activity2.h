#ifndef ACTIVITY2_H_INCLUDED
#define ACTIVITY2_H_INCLUDED

void ADC_Init();
/**
 * @brief to read the ADC values
 * 
 * @param ch 
 * @return uint16_t 
 */
uint16_t ADC_Read(uint8_t ch);

#endif // ACTIVITY2_H_INCLUDED