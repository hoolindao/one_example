/**
 * 输出摄氏温度和华氏温度表
 * c=(5/9)(f-32)
 * f=(9/5)*c+32
 */

#include <stdio.h>

int main() {
    float celsius, frah;
    float lower, upper, step;

    lower = -20;
    upper = 180;
    step = 18;

    printf("celsius\tfrah\n------------\n");
    for (celsius = lower;
        celsius <= upper;
        celsius = celsius + step) {
            frah = 9.0 * celsius / 5.0 + 32;
            printf("%3.0f\t%6.1f\n", celsius, frah);
        }
    return 0;
}


/* ---Terminal--- */
/* 
celsius frah
------------
-20       -4.0
 -2       28.4
 16       60.8
 34       93.2
 52      125.6
 70      158.0
 88      190.4
106      222.8
124      255.2
142      287.6
160      320.0
178      352.4
*/
/* ------End----- */