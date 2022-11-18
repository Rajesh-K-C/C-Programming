#include <stdio.h>
// Program for Swap two Numbers Using Temporary Variable

int main()
{
    int x = 10, y = 5, tmp;
    printf("x = %d\ny = %d", x, y);
    tmp = x;
    x = y;
    y = tmp;
    printf("\nSwap result \nx = %d \ny = %d", x, y);
    return 0;
}
