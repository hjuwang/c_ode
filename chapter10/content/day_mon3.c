
#include <stdio.h>

#define MONTHS 12

int main(void)
{

    int days[MONTHS] = {31,28,31,30,31,30,31,31,30,31,30,31};

    int index;

    for (index =0 ; index < MONTHS; index++)
    //循环中不应该改变index 的值
        printf("Month %2d has %d days.\n",index+1,*(days+index));

    return 0;    
}