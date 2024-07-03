#include <stdio.h>
void display(char cr, int lines, int width);

int main(void)
{
    int ch;
    int rows, cols;
    printf("Enter number of rows and columns: ");

    while ((ch = getchar()) != '\n')
    {
        scanf("%d %d", &rows, &cols); // scnaf 不会读取空格、换行符
        display(ch, rows, cols);
        printf("Enter number of rows and columns: ");
        printf("enter a newline to quit\n");
        /* code */
    }
    printf("Bye\n");
    return 0;
}
void display(char cr, int lines, int width)
{
    int rwo, col;
    for (rwo = 1; rwo <= lines; rwo++)
    {

        for (col = 1; col <= width; col++)
            putchar(cr);
            
        putchar('\n'); // 换行
        
    }
}    
