#include<stdio.h>
int main()
{
    int a,b,c;     //定义三个整形变量
    scanf("%d%d",&a,&b);    //从键盘接收两个整数值
    c=a*a+b*b;    //计算两数平方和并赋值给c
    printf("%d\n",c);    //输出两数平方和
    return 0;
}