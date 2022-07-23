#include <stdio.h>
int main()
{
    float r, s;      //定义两个浮点数变量
    scanf("%f", &r); //从键盘接收一个浮点数r
    s=r*r*3.1415;    //圆面积的计算公式
    printf("%0.2f",s);    //输出圆的面积，保留兩位小數
    return 0;
}