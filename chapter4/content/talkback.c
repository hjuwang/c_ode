#include <stdio.h>
#include <string.h> // 提供strenlen 函数原型
#define DENSITY 62.4 // 人体密度

int main(void){
    float weight, volume;
    int size,letters; //表示字节数量和字符数量
    char name[40];//申请了 40 个字节的存储空间（一个char类型变量 占一个字节））

    printf("Hi! What's your first name?\n");
    scanf("%s",name); //注意这里的name 没有&
    printf("%s, what's your weight in pounds?\n",name);
    scanf("%f",&weight);
    size=sizeof name ; //如果是特定量,可以不使用()
    letters=strlen(name);
    
    volume = weight / DENSITY;
    /*
    形如%m.nf ,其中m表示输出数据的宽度
    （如果宽度不够就补空格，注小数点号也算一个宽度，如果数据实际宽度超过m就用实际宽度）；
    n表示输出的实数保留n位小数；
     */
    printf("Well, %s, your volume is %2.2f cubic feet\n",name,volume);

    printf("name size = %d, letters = %d\n",size,letters);
    return 0;
}