#include "mbed.h"
DigitalOut myLed(LED1);
DigitalIn myButton(BUTTON1);
bool OnOff_State = false;
int main() {
    while(true){
        //active low push button
        if(myButton == 0){
    //use 100 ms as wait time to sense 1 button press
            ThisThread::sleep_for(100);
            if(myButton == 0)
            OnOff_State = !myLed;
            myLed = OnOff_State;
            ThisThread::sleep_for(100);
        }
    }
}
