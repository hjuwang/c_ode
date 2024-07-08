#include <stdio.h>

int main(void){

    
    int count;
    printf("please input:");

    while (getchar()!=EOF)
    {
        count+=1;
    }
    
    printf("count=%d",count);

    return 0;
}