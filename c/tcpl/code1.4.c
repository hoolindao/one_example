#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {
    int frah;
    for (frah = LOWER; frah <= UPPER; frah = frah + STEP)
        printf("%d\t%6.2f\n", frah, (5.0/9.0)*(frah-32));
    return 0;
}