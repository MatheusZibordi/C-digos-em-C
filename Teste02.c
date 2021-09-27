#include <stdio.h>
int main( void ) {
    int y;
    int x = 1;
    int total = 0;
    while ( x <= 5 ) {
        y = x * x * x;
        total += y;
        ++x;
    }
    printf( "The total is %d \n", total );
}