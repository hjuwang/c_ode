#include <stdio.h>

int main(void)
{
    int age;
    float asset;
    char pet[30];

    printf("Enter your age,asset and pet:\n");
    scanf("%d %f", &age, &asset);
    scanf("%s", pet);
    // 使用反斜杠换行
    printf("age = %d,asset = %f,pet = %s\n", age, asset, pet);

    return 0;
}