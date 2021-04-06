#include <stdio.h>
#include <stdlib.h>
#include <wiringPi.h>

// Pin 7 0 2
// N   2 1 0


int main(void)
{
    int pin[2];
    pin[0] = 2;
    pin[1] = 0;
    pin[2] = 7;
    printf("LED blinking by wiringPi\n");
    if(wiringPiSetup() == -1){
        printf("Setting up problem ... Abort!");
        exit(1);
    }
    pinMode(pin, OUTPUT);
    int i,j;
    for (i=0;i<10;i++){
        for(j=0;j<7;j++){
            digitalWrite(pin,1);
            delay(500);
            digitalWrite(pin,0);
            delay(500);
        }
    }
    return 0;
}
