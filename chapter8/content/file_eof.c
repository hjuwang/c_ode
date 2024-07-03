#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int ch;         // 一个字符
    FILE *fp;       // 文件指针
    char fname[50]; // 存储文件名

    printf("Enter file name: ");
    scanf("%s", fname);

    fp = fopen(fname, "r");

    if (fp == NULL)
    {
        printf("Can't open %s\n", fname);
        exit(1); // 退出程序
    }

    while ((ch = getc(fp)) != EOF) //getc(fp) 从文件中获取一个字符
    {
        putchar(ch);
    }

    fclose(fp); //关闭文件

    return 0;
}