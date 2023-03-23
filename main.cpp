/**
 * @file main.cpp
 * @brief This is a brief description of the file.
 * 
 * This is a more detailed description of the file that can include
 * additional information, such as the purpose of the file or the author.
 */

#include "mbed.h"
#include "arm_book_lib.h"

int main()
{
    
    /*! 
     * @brief Declaracion de puertos 
     *
     * Se crean los objetos correspondientes para declararlos como de entrada/salida
     *  y se configura su la resistencia de PullDown
     */
    DigitalIn gasDetector(D4);

    DigitalOut alarmLed(LED1);

    gasDetector.mode(PullDown);

    alarmLed = OFF;

    /*! 
     * @brief Test function
     *
     * This function prints "Hello World" to the console.
     */
    printf("%s\n","Hello World");

    while (true) {
        if ( gasDetector == ON ) {
            alarmLed = ON;
        }
        
        if ( gasDetector == OFF ) {
            alarmLed = OFF;
        }
    }
}
