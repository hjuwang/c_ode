#include <stdio.h>

int main(void){
    float a;
    printf("enter a floating-point value:");
    scanf("%f",&a);
    printf("fixed-point notation:%f\n",a);
    printf("exponential notation:%e\n",a);
    // 注意使用 %a 格式化输出p 计数法
    printf("p notation:%a\n",a);
    return 0;
}