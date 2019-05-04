#include <stdio.h>

int main() {
    printf("hello world \c");
    return 0;
}

///warning
/* ---Terminal--- */
/* 
pratice1-2.c:4:25: warning: unknown escape sequence '\c' [-Wunknown-escape-sequence]
    printf("hello world \c");
                        ^~
1 warning generated.
hello world c%          
*/
/* ------End----- */