#include <stdio.h>

int main(void)
{


    /*
    zippo 是一个指针数组，每一个指针吊着一个一维数组
    */

    int zippo[2][2] = {{1, 2}, {11,22}};

    int * ptr1;
    int * ptr2;

    // zippo= &zippo[0](zippo[0])本身是一个指向以为数组的指针

    ptr1 = *zippo; //指向第一个数组的指针（取第一个指针）
    ptr2 = *(zippo+1); // 指向第二个数组的指针
    

    printf("%d %d\n",*ptr1,*ptr2);
    printf("%d %d\n",*(ptr1+1),*(ptr2+1));

    
   

   return 0;

}