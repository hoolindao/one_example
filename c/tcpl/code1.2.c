#include <stdio.h>

/* 打印华氏温度(0,20,40,...,30)和其对应的摄氏温度 
   换算公式 C=(5/9)(F-32) */

int main() {
    float fahr, celsius;
    float lower, upper, step;

    lower = 0; //下限
    upper = 300; //上限
    step = 20; //步长

    printf("华氏温度 摄氏温度\n"); //输出表首行

    fahr = lower;
    while (fahr <= upper){
        celsius = 5 * (fahr - 32) / 9;
        printf("%3.0f\t %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    
    return 0;
}