#include <stdio.h>

/*
数组名的概念很重要

如果说是一维数组的是具体类型的数组
那么二维数组就是数组名数组,数组中存放的是数组名

a 是个 三维数组
a ->a[0]->a[0][0]->a[0][0][0]

*/
int main(void)
{
    int a[3][3][3] = {
        {{111,112,113},{121,122,123},{131,132,133}},
        {{211,212,213},{221,222,223},{231,232,233}},
        {{311,312,313},{321,322,323},{331,332,333}}
    };


    int * ptr;

    // a -> a[0]; a=&a[0], a[0]=*a
    // a[0] -> a[0][0]; a[0]=&a[0][0],a[0][0]=*a[0]=**a
    // a[0][0] -> a[0][0][0]; a[0][0]=&a[0][0][0],a[0][0][0]=*a[0][0]=***a

    printf("%d\n",a[0][0][0]);
    printf("%d\n",***a);
    
return 0;
}