#include <stdio.h>

/*
注意const 和指针声明的三种方式
*/

int main(void){

    int a[4]= {1,2,3,4};

    const int* ptr1 = a; // 声明指针不能改变指针指向的值,但是可以移动
    int* const  ptr2 = a; // 声明指针可以改变指针指向的值，但是不能移动

    const int* const ptr3 =a; // 声明指针不能改变指针指向的值，也不能移动



    ptr1++;

    printf("%d",*ptr1);

    return 0;
    
}