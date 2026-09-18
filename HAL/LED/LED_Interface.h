/*   LED_Interface.h
Author : Aseel Anwar
Layer  : HAL
SWC    : LED
*/S

#pragma once

// PORT definitions
#define LED_PORTA 0
#define LED_PORTB 1
#define LED_PORTC 2
#define LED_PORTD 3

//PIN definitions
#define LED_PIN0 0
#define LED_PIN1 1
#define LED_PIN2 2
#define LED_PIN3 3
#define LED_PIN4 4
#define LED_PIN5 5
#define LED_PIN6 6
#define LED_PIN7 7

#define LED_ACTIVE_HIGH 1
#define LED_ACTIVE_LOW  0

typedef struct{

    u8 PORT;
    u8 PIN;
    u8 Active_State;
    
} LED_Type;

void LED_voidInit    (LED_Type LED_Configuration);
void LED_voidTurnOn  (LED_Type LED_Configuration);
void LED_voidTurnOff (LED_Type LED_Configuration);
void LED_voidToggle  (LED_Type LED_Configuration);