#include "main.h"
#include "board.h"
#include "gpio.h"

/*!
 * LED GPIO pins objects
 */
extern Gpio_t Led1;

/*!
 * KEY GPIO pins objects
 */
extern Gpio_t Key1;

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  BoardInitMcu();
  while (1)
  {
    GpioWrite(&Led1,GpioRead(&Key1));
  }
 
}



