#include <stdio.h>
#include <stdlib.h>
#include <wiringPi.h>

// Pin 7 0 2
// N   2 1 0

int main(void)
{
    int pin[2] = {2,0,7};
    int data[2] = {0,0,0};
    printf("LED blinking by wiringPi\n");
    if(wiringPiSetup() == -1){
        printf("Setting up problem ... Abort!");
        exit(1);
    }
    printf("test");
    int i,j;
    for(i=0;i<3;i++){
        pinMode(pin[i], OUTPUT);
    }

    while(1){
        for(j=0;j<8;j++){
            int k = 0;
            if(j > 0){
                while(j > 0)
                {
                    data[k] = j % 2;
                    k++;
                    j = j / 2;
                }
            }
            int l = 0;
            for (l=0;l<3;l++){
                digitalWrite(pin[l],1);
            }
            delay(100);
        }
    }

    return 0;
}
