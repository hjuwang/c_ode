#include <stdio.h>

int main(void)
{

    /* code */
    _Bool a;

    printf("please input a:",a);
    scanf("%d",&a);
    if (a){
        printf("a=true");
    }else{
        printf("a=false");
    }
    printf("%d",a);
    return 0;
}
