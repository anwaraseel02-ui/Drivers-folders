/*  DIO_Interface
Author: Aseel Anwar
Layer : MCAL
SWC   : DIO/GPIO
*/

#pragma once

#define DIO_PIN_OUTPUT 1
#define DIO_PIN_INPUT 0

#define DIO_PIN_HIGH 1
#define DIO_PIN_LOW 0

#define DIO_PORTA 0
#define DIO_PORTB 1
#define DIO_PORTC 2
#define DIO_PORTD 3

#define DIO_PIN0 0
#define DIO_PIN1 1
#define DIO_PIN2 2
#define DIO_PIN3 3
#define DIO_PIN4 4
#define DIO_PIN5 5
#define DIO_PIN6 6
#define DIO_PIN7 7


void DIO_voidSetPinDirection  (u8 u8PORT, u8 u8PIN, u8 u8Direction );
void DIO_voidSetPinValue      (u8 u8PORT, u8 u8PIN, u8 u8Value     );
u8 DIO_voidGetPinValue        (u8 u8PORT, u8 u8PIN                 );
 
/*TASK */ 
void DIO_voidTogPinValue      (u8 u8PORT, u8 u8PIN                 );
 
void DIO_voidSetPortDirection (u8 u8PORT, u8 u8Direction           );
void DIO_voidSetPortValue     (u8 u8PORT, u8 u8Value               );
u8 DIO_u8GetPortValue         (u8 u8PORT                           );
void DIO_voidTogPortValue     (u8 u8PORT                           ); 