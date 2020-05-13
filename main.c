
#include <stdint.h>
#include <stdbool.h>
#include "driverlib/gpio.c"
#include "driverlib/gpio.h"
#include "driverlib/debug.h"
#include "inc/hw_types.h"
#include "inc/hw_gpio.h"
#include "driverlib/pin_map.h"
#include "driverlib/sysctl.c"
#include "driverlib/sysctl.h"

/**
 * main.c
 */

int main(void)
{
    SysCtlClockSet ( SYSCTL_SYSDIV_5 | SYSCTL_USE_PLL | SYSCTL_OSC_MAIN | SYSCTL_XTAL_16MHZ ) ;
    SysCtlPeripheralEnable ( SYSCTL_PERIPH_GPIOF ) ;

    GPIOPinTypeGPIOInput(GPIO_PORTF_BASE , GPIO_PIN_4 ) ;
    GPIOPadConfigSet(GPIO_PORTF_BASE,GPIO_PIN_4, GPIO_STRENGTH_2MA , GPIO_PIN_TYPE_STD_WPU ) ;

    GPIOPinTypeGPIOOutput (GPIO_PORTF_BASE,GPIO_PIN_1) ;//led rojo
    GPIOPinTypeGPIOOutput (GPIO_PORTF_BASE, GPIO_PIN_2) ;//led azul
    GPIOPinTypeGPIOOutput (GPIO_PORTF_BASE, GPIO_PIN_3) ;//led verde

    uint32_t tiempo=0;

    while(1){
	    GPIOPinWrite(GPIO_PORTF_BASE,GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3,0x02);
	    for(tiempo=0;tiempo<16000000;tiempo++){tiempo=tiempo;}
	    GPIOPinWrite(GPIO_PORTF_BASE,GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3,0x00);
	    for(tiempo=0;tiempo<160000;tiempo++){tiempo=tiempo;}
	    GPIOPinWrite(GPIO_PORTF_BASE,GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3,0xA);
	    for(tiempo=0;tiempo<16000000;tiempo++){tiempo=tiempo;}
	    GPIOPinWrite(GPIO_PORTF_BASE,GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3,0x00);
	    for(tiempo=0;tiempo<160000;tiempo++){tiempo=tiempo;}
	    GPIOPinWrite(GPIO_PORTF_BASE,GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3,0x08);
	    for(tiempo=0;tiempo<16000000;tiempo++){tiempo=tiempo;}
	    GPIOPinWrite(GPIO_PORTF_BASE,GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3,0x00);
	    for(tiempo=0;tiempo<1600000;tiempo++){tiempo=tiempo;}
	    GPIOPinWrite(GPIO_PORTF_BASE,GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3,0x08);
	    for(tiempo=0;tiempo<1600000;tiempo++){tiempo=tiempo;}
	    GPIOPinWrite(GPIO_PORTF_BASE,GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3,0x00);
	    for(tiempo=0;tiempo<1600000;tiempo++){tiempo=tiempo;}
	    GPIOPinWrite(GPIO_PORTF_BASE,GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3,0x08);
	    for(tiempo=0;tiempo<1600000;tiempo++){tiempo=tiempo;}
	    GPIOPinWrite(GPIO_PORTF_BASE,GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3,0x00);
	    for(tiempo=0;tiempo<1600000;tiempo++){tiempo=tiempo;}
	    GPIOPinWrite(GPIO_PORTF_BASE,GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3,0x08);
	    for(tiempo=0;tiempo<1600000;tiempo++){tiempo=tiempo;}
	    GPIOPinWrite(GPIO_PORTF_BASE,GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3,0x00);
	    for(tiempo=0;tiempo<1600000;tiempo++){tiempo=tiempo;}
	}
}
