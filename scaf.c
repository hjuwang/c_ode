#include <stdio.h>

int main(void)
{
    int a;

    printf("please input a:");
    
    scanf("%d", &a);

    printf("a=%d",a);
    /* code */
    getchar(); //读取输入a 之后的 enter
    getchar(); //再读一个 enter 关闭
    return 0;
}
