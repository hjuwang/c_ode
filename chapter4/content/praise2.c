#include <stdio.h>
#include <string.h> // 提供strlen 函数原型

#define PRAISE "You are an extraordinary being."

int main(void)
{
    char name[40];
    printf("What's your name?\n");
    scanf("%s", name);
    printf("Hello, %s. %s\n", name, PRAISE);
    printf("Your name of %zd letters occupies %zd memory cells.\n",strlen(name),sizeof name);

    printf("The phrase of praise is %zd letters long",strlen(PRAISE));
    printf("and occupies %zd memory cells.\n",sizeof PRAISE);




    return 0;

}