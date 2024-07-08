#include <stdio.h>
#define SIZE 10

//函数声明可以 省略形参数名称
int sum(int [],int);

int main(void){

    int resutl = 0;
    int arr[SIZE] = {1,2,3,4,5,6,7,8,9,10};
    resutl=sum(arr,SIZE);

    printf("sum_result = %d\n",resutl);
    //计算数组占用字节的大小
    printf("The size of arr is %zd\n",sizeof arr);
    return 0;
}


int sum(int arr[],int size){
    
    printf("The size of arr is %zd\n",sizeof arr); // 8 指针类型变量占8 个字节

    int total = 0;
    
    for (int i = 0; i < size; i++)
        total+=arr[i];
    return total;
}