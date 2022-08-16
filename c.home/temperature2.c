#include<stdio.h>
int main()
{
    float F, c;    //定义两个浮点小数。
    scanf("%f",&F);    //从键盘接收一个浮点小数值F，%f是说明F是浮点小数，&F是从键盘接收取符号位。
    c = 5*(F-32)/9;    //输入公式计算，赋值给c。
    printf("%.2f",c);    //输出c,%.2f说明是保留两位小数。
    return 0;
}