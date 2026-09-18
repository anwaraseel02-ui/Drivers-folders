/*   LED_Interface.h
Author : Aseel Anwar
Layer  : HAL
SWC    : LED
*/

#include "STD_Types.h"
#include "BIT_MATH.h"

#include "DIO_Interface.h"

#include "LED_Interface.h"
#include "LED_Private.h"
#include "LED_Config.h"

//Init = initialize the LED pin as output and set the initial state of the LED based on its active state
void LED_voidInit    (LED_Type LED_Configuration)
{
    DIO_SetPinDirection(LED_Configuration.PORT, LED_Configuration.PIN, DIO_PIN_OUTPUT);
}

void LED_voidTurnOn  (LED_Type LED_Configuration)
{
    if(LED_Configuration.Active_State == LED_ACTIVE_HIGH)
    {
        DIO_SetPinValue(LED_Configuration.PORT, LED_Configuration.PIN, DIO_PIN_HIGH);
    }
    else if(LED_Configuration.Active_State == LED_ACTIVE_LOW)
    {
        DIO_SetPinValue(LED_Configuration.PORT, LED_Configuration.PIN, DIO_PIN_LOW);
    }
}


void LED_voidTurnOff (LED_Type LED_Configuration)
{
    if(LED_Configuration.Active_State == LED_ACTIVE_HIGH)
    {
        DIO_SetPinValue(LED_Configuration.PORT, LED_Configuration.PIN, DIO_PIN_LOW);
    }
    else if(LED_Configuration.Active_State == LED_ACTIVE_LOW)
    {
        DIO_SetPinValue(LED_Configuration.PORT, LED_Configuration.PIN, DIO_PIN_HIGH);
    }
}


void LED_voidToggle  (LED_Type LED_Configuration)
{
    DIO_TogPinValue(LED_Configuration.PORT, LED_Configuration.PIN);
}

