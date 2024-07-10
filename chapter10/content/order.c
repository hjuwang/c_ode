
/*
练习指针的运算顺序
*/
#include <stdio.h>

int data[2] = {100, 200};

int moredata[2] = {300, 400};

int main(void)
{

    // 定义三个指针
    int *p1, *p2, *p3;

    p1 = p2 = data;

    p3 = moredata;

    printf(" *p1 = %d,  *p2 = %d,  *p3 = %d\n", *p1, *p2, *p3); // 100，200，300


//    (*p3)++ 不涉指针的运算，运算的是指针指向的值
    printf("*p1++ = %d, *++p2 = %d, (*p3)++ = %d\n", *p1++, *++p2, (*p3)++); //100,200,300
    printf(" *p1 = %d,  *p2 = %d,  *p3 = %d\n", *p1, *p2, *p3); // 200,200,400
    return 0;
}