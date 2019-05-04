#include <stdio.h>

int main() {
    float frah, celsius;
    float lower, upper, step;

    lower = 0; 
    upper = 300;
    step = 20;

    frah = lower;

    printf("frah\tcelsius\n-------------\n");
    while (frah <= upper) {
        celsius = 5.0 * (frah -32) /9.0;
        printf("%3.0f\t%6.2f\n", frah, celsius);
        frah = frah + step;
    }

    return 0;
}

/* ---Terminal--- */
/* 
frah    celsius
-------------
  0     -17.78
 20      -6.67
 40       4.44
 60      15.56
 80      26.67
100      37.78
120      48.89
140      60.00
160      71.11
180      82.22
200      93.33
220     104.44
240     115.56
260     126.67
280     137.78
300     148.89    */
/* ------End----- */