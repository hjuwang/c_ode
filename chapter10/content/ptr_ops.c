
#include <stdio.h>

int main(void)
{

    int urn[5] = {100, 200, 300, 400, 500};

    int *ptr1, *ptr2, *ptr3;

    ptr1 = urn;     // ptr1->urn[0]
    ptr2 = &urn[2]; // ptr2->urn[2]

    // 1-解引用地址
    printf("pointer value, dereferenced pointer, pointer address:\n");
    printf("ptr1 = %p, *ptr1 =%d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1); // p->urn,urn[0](100),p->ptr1

    // 2-指针加法
    ptr3 = ptr1 + 4;
    printf("\nadding an int to a pointer:\n");
    printf("ptr1 + 4 = %p, *(ptr1 + 4) = %d\n", ptr1 + 4, *(ptr1 + 4)); // p-> urn[4],urn[4](500)

    // 3-地增指针
    ptr1++;
    printf("\nvalues after ptr1++:\n");
    printf("ptr1 = %p, *ptr1 =%d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1); // 指针值+类型大小, p->urn[1],urn[1](200),p->ptr1(没变)

    // 4-指针递减(会加就会减)
    ptr2--;
    printf("\nvalues after --ptr2:\n");
    printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n", ptr2, *ptr2, &ptr2); // p->urn[2],urn[1](200),p->ptr2

    --ptr1; // 恢复为初始值
    ++ptr2; // 恢复为初始值
    printf("\nPointers reset to original values:\n");
    printf("ptr1 = %p, ptr2 = %p\n", ptr1, ptr2);

    // 5-一个指针减去另一个指针
    printf("\nsubtracting one pointer from another:\n");
    printf("ptr2 = %p, ptr1 = %p, ptr2 - ptr1 = %td\n", ptr2, ptr1, ptr2 - ptr1); // 差值为 2(个int 类型)

    // 6-一个指针减去一个整数
    printf("\nsubtracting an int from a pointer:\n");
    printf("ptr3 = %p, ptr3 - 2 = %p\n", ptr3, ptr3 - 2);

    return 0;
}