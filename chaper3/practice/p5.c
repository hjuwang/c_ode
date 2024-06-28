
#include <stdio.h>

/*
一年大约有3.156×107秒。编写一个程序，提示用户输入年龄，然后显
示该年龄对应的秒数
 */
int main(void){

    float year_second =  3.156e7;
    int age;
    float result_second;
    printf("please input your age:");
    scanf("%d",&age);
    result_second = year_second * age;
    printf("you have lived %f seconds",result_second);

    
}