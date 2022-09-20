#include<stdio.h>
int main()
{
    char a;    //定义一个字符
    int b;    //定义一个整型变量
    float c;    //定义一个单精度浮点小数
    double d;    //定义一个双精度浮点小数
    scanf("%c %d %f %lf",&a,&b,&c,&d);
    printf("%c %4d %.2f %.12lf",a,b,c,d);    //占4个字符，向右对齐
    return 0;
}