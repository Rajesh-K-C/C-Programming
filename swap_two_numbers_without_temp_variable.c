#include <stdio.h>
// The Program for Swap Numbers without Using Temporary Variable

int main()
{
    int x = 10, y = 5;
    printf("x = %d\ny = %d", x, y);
    x += y; // x = x + y;
    y = x - y;
    x -= y;  // x = x - y;
    printf("\nSwap result \nx = %d \ny = %d", x, y);
    return 0;
}