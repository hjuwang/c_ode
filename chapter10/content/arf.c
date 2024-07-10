#include <stdio.h>

#define SIZE 5

void show_array(const double arr[], int n);
void mult_array(double arr[], int n, double mult);

int main(void)
{

    double dip[SIZE] = {20.0, 30.0, 40.0, 50.0, 60.0};
    printf("show_array():\n");
    show_array(dip, SIZE);

    mult_array(dip, SIZE, 2.5);
    printf("The dip array after calling mult_array():\n");
    show_array(dip, SIZE);
    return 0;
}

void show_array(const double arr[], int n)
{

    printf("[");

    // 前n-1 个需要","
    for (int i = 0; i < n - 1; i++)
    {
        printf("%8.3f,", arr[i]);
    }

    printf("%8.3f", arr[n - 1]);

    printf("]\n");
}


// 注意这种形式是指针传值
void mult_array(double arr[], int n, double mult){

    for (int i = 0; i < n; i++)
    {
        arr[i]+=mult;
    }
    
}