#include "mbed.h"

DigitalOut myled(LED1);
double dot = 0.5;
int dash = 1;
int space = 2;
int end = 3;
void dotF(){
        myled = 1;
        wait(dot);
        myled = 0;
        wait(dot);
}
void dashF(){
        myled = 1;
        wait(dash);
        myled = 0;
        wait(dot);
}
int main() {  
    while(1) {
        dashF();
        dashF();
        wait(space);
        dotF();
        dashF();
        wait(space);
        dashF();
        wait(space);
        dotF();
        wait(space);
        dotF();
        dashF();
        dashF();
        dashF();
        wait(end);       
    }
}
