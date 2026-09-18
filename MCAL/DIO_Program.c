/*  DIO_Program.c
Author: Aseel Anwar
Layer : MCAL
SWC   : DIO/GPIO
*/

#include "STD_Types.h"
#include "BIT_MATH.h"

#include "DIO_Private.h"
#include "DIO_Interface.h"
#include "DIO_Config.h"

// All the following is for PIN registers

void DIO_voidSetPinDirection (u8 u8PORT, u8 u8PIN, u8 u8Direction)
{
    if (u8Direction == DIO_PIN_OUTPUT )
    {
        switch (u8PORT)
        {
            case DIO_PORTA : SET_BIT(DDRA, u8PIN); break ;
            case DIO_PORTB : SET_BIT(DDRB, u8PIN); break ;
            case DIO_PORTC : SET_BIT(DDRC, u8PIN); break ;
            case DIO_PORTD : SET_BIT(DDRD, u8PIN); break ;
        }
    }
    else if (u8Direction == DIO_PIN_INPUT)
     {
         switch (u8PORT)
        {
            case DIO_PORTA : CLR_BIT(DDRA, u8PIN); break ;
            case DIO_PORTB : CLR_BIT(DDRB, u8PIN); break ;
            case DIO_PORTC : CLR_BIT(DDRC, u8PIN); break ; 
            case DIO_PORTD : CLR_BIT(DDRD, u8PIN); break ;
        }   
     }
}


void DIO_voidSetPinValue (u8 u8PORT, u8 u8PIN, u8 u8Value)
{
    if (u8Value == DIO_PIN_HIGH)
    {
        switch (u8PORT)
        {
            case DIO_PORTA : SET_BIT(PORTA, u8PIN); break ;
            case DIO_PORTB : SET_BIT(PORTB, u8PIN); break ;
            case DIO_PORTC : SET_BIT(PORTC, u8PIN); break ;
            case DIO_PORTD : SET_BIT(PORTD, u8PIN); break ;
        }
    }
    else if (u8Value == DIO_PIN_LOW)
    {
         switch (u8PORT)
        {
            case DIO_PORTA : CLR_BIT(PORTA, u8PIN); break ;
            case DIO_PORTB : CLR_BIT(PORTB, u8PIN); break ;
            case DIO_PORTC : CLR_BIT(PORTC, u8PIN); break ; 
            case DIO_PORTD : CLR_BIT(PORTD, u8PIN); break ;
        }   
    }
}


u8   DIO_voidGetPinValue (u8 u8PORT, u8 u8PIN)
{ 
    u8 LOCAL_u8GetPin = 0;
    switch (u8PORT)
    {
        case DIO_PORTA : LOCAL_u8GetPin = GET_BIT(PINA, u8PIN); break;
        case DIO_PORTB : LOCAL_u8GetPin = GET_BIT(PINB, u8PIN); break;
        case DIO_PORTC : LOCAL_u8GetPin = GET_BIT(PINC, u8PIN); break;
        case DIO_PORTD : LOCAL_u8GetPin = GET_BIT(PIND, u8PIN); break;
    }
return LOCAL_u8GetPin ;
}

void DIO_voidTogPinValue (u8 u8PORT, u8 u8PIN)
{ 
    switch (u8PORT)
    {
        case DIO_PORTA : TOG_BIT(PORTA, u8PIN); break;
        case DIO_PORTB : TOG_BIT(PORTB, u8PIN); break;
        case DIO_PORTC : TOG_BIT(PORTC, u8PIN); break;
        case DIO_PORTD : TOG_BIT(PORTD, u8PIN); break;
    }
}
 
// All the following is for PORT registers

void DIO_voidSetPortDirection (u8 u8PORT, u8 u8Direction)
{
  switch (u8PORT)
  {
    case DIO_PORTA: DDRA = u8Direction ; break;
    case DIO_PORTB: DDRB = u8Direction ; break;
    case DIO_PORTC: DDRC = u8Direction ; break;
    case DIO_PORTD: DDRD = u8Direction ; break;

  }
}

void DIO_voidSetPortValue (u8 u8PORT, u8 u8Value)
{
  switch (u8PORT)
  {
    case DIO_PORTA: PORTA = u8Value ; break;
    case DIO_PORTB: PORTB = u8Value ; break;
    case DIO_PORTC: PORTC = u8Value ; break;
    case DIO_PORTD: PORTD = u8Value ; break;

  }      
}

u8 DIO_u8GetPortValue (u8 u8PORT )
{
 u8 LOCAL_u8GetPort = 0;
    switch (u8PORT)
    {
        case DIO_PORTA : LOCAL_u8GetPort = PINA; break;
        case DIO_PORTB : LOCAL_u8GetPort = PINB; break;
        case DIO_PORTC : LOCAL_u8GetPort = PINC; break;
        case DIO_PORTD : LOCAL_u8GetPort = PIND; break;
    }
return LOCAL_u8GetPort ;
}

void DIO_voidTogPortValue     (u8 u8PORT )
{
  switch (u8PORT)
    {
        case DIO_PORTA : PORTA = ~PORTA; break;
        case DIO_PORTB : PORTB = ~PORTB; break;
        case DIO_PORTC : PORTC = ~PORTC; break;
        case DIO_PORTD : PORTD = ~PORTD; break;
    }
}