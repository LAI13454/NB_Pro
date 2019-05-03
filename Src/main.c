#include "main.h"
#include "board.h"
#include "gpio.h"
#include "uart.h"

/*!
 * LED GPIO pins objects
 */
extern Gpio_t Led1;

/*!
 * KEY GPIO pins objects
 */
extern Gpio_t Key1;

/*
 * MCU objects
 */
extern Uart_t Uart2;

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  BoardInitMcu();
  UartPutChar(&Uart2, 'a');
  while (1)
  {
    GpioWrite(&Led1,GpioRead(&Key1));
  }
 
}



