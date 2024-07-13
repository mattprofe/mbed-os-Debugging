#include "mbed.h"

// main() runs in its own thread in the OS
int main()
{

    DigitalIn B1_USER(BUTTON1);

    DigitalOut LED(LED1);

    volatile int count = 0;

    while (true) {

        if(LED!=B1_USER){
            LED=B1_USER;

            count=count+1;
        }

    }
}

