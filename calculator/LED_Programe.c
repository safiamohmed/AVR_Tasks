#include "STD_TYPES.h"
#include "DIO_INTERFACE.h"
#include "BIT_MATH.h"
#include "LED_Interface.h"


void LED_voidInit(LED_Confgration Led_u8Conf)
{
	DIO_enumSetPinDirection(Led_u8Conf.port,Led_u8Conf.pin,DIO_OUTPUT);

}
void LED_voidOn(LED_Confgration Led_u8Conf){
	if(Led_u8Conf.Active_State==ACTIVE_HIGH){
		DIO_enumSetPinValue(Led_u8Conf.port,Led_u8Conf.pin,DIO_HIGH);
	}
	else
	{
		DIO_enumSetPinValue(Led_u8Conf.port,Led_u8Conf.pin,DIO_LOW);
	}

}
void LED_voidOff(LED_Confgration Led_u8Conf){
	if(Led_u8Conf.Active_State==ACTIVE_HIGH){
		DIO_enumSetPinValue(Led_u8Conf.port,Led_u8Conf.pin,DIO_LOW);
	}
	else
	{
		DIO_enumSetPinValue(Led_u8Conf.port,Led_u8Conf.pin,DIO_HIGH);
	}

}
void LED_voidToggle(LED_Confgration Led_u8Conf){
	DIO_enumTogglePinValue(Led_u8Conf.port,Led_u8Conf.pin);
}
