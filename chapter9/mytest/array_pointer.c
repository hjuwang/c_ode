#include <stdio.h>

int main(void)
{
    
    char a[4]= {'a','b','c','d'};


    char * pointer;

    for (int i = 0; i < 4; i++)
    {
        //使用地址进行运算
        pointer = a+i;
        printf("%c\n",*pointer);
    }


    return 0;
    
}