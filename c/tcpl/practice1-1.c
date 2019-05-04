#include <stdio.h>

int main() {
    printf("hello world");
    return 0;
}

///gcc pratice1-1.c -o pratice1-1 &&./pratice1-1
/* ---Terminal--- */
/* hello world   */
/* ------End----- */

///error
/* ---Terminal--- */
/* 
pratice1-1.c:4:26: error: expected ';' after expression
    printf("hello world")
                         ^
                         ;
1 error generated.   
*/
/* ------End----- */

///error
/* ---Terminal--- */
/* 
pratice1-1.c:4:5: warning: implicitly declaring library function 'printf' with type 'int (const char *, ...)'
      [-Wimplicit-function-declaration]
    printf("hello world");
    ^
pratice1-1.c:4:5: note: include the header <stdio.h> or explicitly provide a declaration for 'printf'
*/
/* ------End----- */
