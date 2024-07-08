#include <stdio.h>
#include <stdbool.h>

// 函数原型

long get_long(void);

// 验证范围的上下限是否有效
bool bad_limits(long begin, long end, long low, long high);

// 计算a～b之间的整数平方和
double sum_squares(long a, long b);

int main(void)
{

    // 定义只读变量
    const long MIN = -10000000L;
    const long MAX = +10000000L;
    long start, stop;
    double answer;

    // 注意这里使用反斜杠换行
    printf("This program computes the sum of the squares of"
    "integers in a range.\nThe lower bound should not"
    "be less than -10000000 and\nthe upper bound"
    "should not be more than +10000000.\nEnter the"
    "limits (enter 0 for both limits to quit):\n"
    "lower limit:");

    start = get_long();
    printf("upper limit:");
    stop = get_long();
    while (start != 0 || stop != 0)
    {
        if (bad_limits(start, stop, MIN, MAX))
        {
            printf("Bad limits. Please try again.\n");
        }
        else
        {
            answer = sum_squares(start, stop);
            printf("The sum of the squares of the integers "
                   "between %ld and %ld is %g\n", start, stop, answer);
        }

        //循环再输入
        printf("Enter the limits (enter 0 for both limits "
               "to quit):\n");
        printf("lower limit:");
        start = get_long();
        printf("upper limit:");
        stop = get_long();
    }
    

    printf("Done.\n");
    return 0;
}

long get_long(void)
{
    long input;
    char ch;
    while (scanf("%ld", &input) != 1) // 当没有正确输入的时候
    {
        while ((ch = getchar()) != '\n') // 且不是 enter 时
        {
            putchar(ch); // 打印错误输出
        }
        printf(" is not an integer.\nPlease enter an ");
        printf("integer value, such as 25, -178, or 3: ");
        /* code */
    }

    return input; // 正确输入就返回
}

double sum_squares(long a, long b)
{

    double total;
    long i;
    for (i = a; i <= b; i++)
    {
        total += (double)i * (double)i; // 注意使用类型转换
    }
    return total;
}

bool bad_limits(long begin, long end, long low, long high)
{
    bool not_good ;
    not_good = false;
        // 检查开始值是否小于结束值
    if (begin > end)
    {
        not_good = true;
        printf("%ld isn't smaller than %ld.\n", begin, end);
    }

    if (begin < low || end < low)
    {

        not_good = true;
        printf("Values must be %ld or greater.\n", low);
    }

    if (begin > high || end > high)
    {

        not_good = true;
        printf("Values must be %ld or less.\n", high);
    }

    return not_good;
}