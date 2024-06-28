#include <stdio.h>


/*
1个水分子的质量约为3.0×10−23克。1夸脱水大约是950克。编写一个
程序，提示用户输入水的夸脱数，并显示水分子的数量。 */

int main(void){

    double  h2o = 3.0e-23;
    //计算一 夸脱水中的水分子数字
    double g_h2o_number = 950.0/h2o;

    int water_kg ;
    
    printf("please input water number:");
    scanf("%d",&water_kg);
    printf("h2os number = %f\n",water_kg*g_h2o_number);
    printf("h2os number = %e\n",water_kg*g_h2o_number);
    printf("h2os number = %a\n",water_kg*g_h2o_number);
    
}