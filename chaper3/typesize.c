#include <stdio.h>

int main(void)

{

    // 整形

    printf("char size = %zd\n", sizeof(char));
    // 有无符号
    {
        printf("unsigned char size = %zd\n", sizeof(unsigned char));
        printf("signed char size = %zd\n", sizeof(signed char));
    }
    printf("\n");
    printf("short size = %zd\n", sizeof(short));
    {
        printf("unsigned short size = %zd\n", sizeof(unsigned short));
        printf("signed short size = %zd\n", sizeof(signed short));
    }
    printf("\n");
    printf("int size = %zd\n", sizeof(int));
    {
        printf("unsigned int size = %zd\n", sizeof(unsigned int));
        printf("signed int size = %zd\n", sizeof(signed int));
    }
    printf("\n");
    printf("long size = %zd\n", sizeof(long));
    {
        printf("unsigned long size = %zd\n", sizeof(unsigned long));
        printf("signed long size = %zd\n", sizeof(signed long));
    }
    printf("\n");
    printf("long int size = %zd\n", sizeof(long int));
    {
        printf("unsigned long int size = %zd\n", sizeof(unsigned long int));
        printf("signed long int size = %zd\n", sizeof(signed long int));
    }
    printf("\n");

    printf("long long size = %zd\n", sizeof(long long));
    {
        printf("unsigned long long size = %zd\n", sizeof(unsigned long long));
        printf("signed long long size = %zd\n", sizeof(signed long long));
    }

 printf("\n");
    // 浮点型
    printf("float size = %zd\n", sizeof(float));
    printf("double size = %zd\n", sizeof(double));
    printf("long double size = %zd\n", sizeof(long double));
 printf("\n");
    // 布尔类型
    printf("bool size = %zd", sizeof(_Bool));

    getchar();
    return 0;
}
