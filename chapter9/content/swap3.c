#include <stdio.h>

void interchange(int *a, int *b);

int main(void)
{

    int x, y;
    x = 10;
    y = 20;

    interchange(&x, &y);
    printf("x=%d,y=%d", x, y);

    return 0;
}

void interchange(int *a, int *b)
{

    int temp = *a;

    *a = *b;

    *b = temp;
}