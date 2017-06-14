/*
 * main.c
 */

#include <stdint.h>
#include <stdbool.h>
#include "inc/tm4c123gh6pm.h"
#include "inc/hw_types.h"
#include "inc/hw_memmap.h"
#include "driverlib/sysctl.h"
#include "driverlib/debug.h"
#include "driverlib/pin_map.h"
#include "driverlib/gpio.h"
int main(void) {
	SysCtlClockSet(SYSCTL_SYSDIV_5|SYSCTL_USE_PLL|SYSCTL_XTAL_16MHZ|SYSCTL_OSC_MAIN);
	SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
	GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_2|GPIO_PIN_1);
	
	while(1)
	{
	    GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_1,0x02);
	    SysCtlDelay(2000000);
	    GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_1,0x0);
	    SysCtlDelay(2000000);
	    GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_2,0x04);
	    SysCtlDelay(2000000);
	    GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_2,0x00);
	    SysCtlDelay(2000000);
	}
	}

