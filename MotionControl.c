#include <stdio.h>
#include <stdlib.h>
#include <iolib.h>


main(void)
{
    // initializes IO library
    iolib_init();
    
    // Declaring pin direction
    iolib_setdir(8,12, DIR_OUT);
   
   // loop for control
   while(1){ 
        // Blink led header 8 pin 12
        pin_high(8,12);
        iolib_sleep_ms(100);
        pin_low(8,12);
        iolib_sleep_ms(100);
   }
    
}