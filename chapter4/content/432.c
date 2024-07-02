#include <stdio.h>
#include <limits.h>
#include <float.h>


int main(void)
{

    signed int max_int,min_int; //默认有符号
    min_int=INT_MIN; 
    max_int=INT_MAX;

    signed char max_char,min_char; //强制有符号高
    min_char=CHAR_MIN;
    max_char=CHAR_MAX;

    signed short max_short,min_short;
    min_short=SHRT_MIN;
    max_short=SHRT_MAX;


    printf("size of int = %d bytes\n",sizeof(int));
    printf("max_int = %d\n",max_int);
    printf("max_int+1=%d\n",max_int+1);

    printf("min_int = %d\n",min_int);
    printf("min_int-1=%d\n",min_int-1);

    printf("size of char = %d bytes\n",sizeof(char));
    printf("max_char = %d\n",max_char);
    printf("max_char+1=%d\n",max_char+1);

    printf("min_char = %d\n",min_char);
    printf("min_char-1=%d\n",min_char-1);


    printf("size of short = %d bytes\n",sizeof(short));
    printf("max_short = %d\n",max_short);
    printf("max_short+1=%d\n",max_short+1);

    printf("min_short = %d\n",min_short);
    printf("min_short-1=%d\n",min_short-1);
    

   
}