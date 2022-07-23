#include<stdio.h>
int main()
{
    double lilv;    //定义一个双精度浮点变量
    int yue,zongjin;    //定义两个整形变量
    scanf("%d %lf %d",&zongjin,&lilv,&yue);    //从键盘接收一个双精度浮点变量，一个整形变量
    double s=zongjin*10000/yue+(zongjin*10000)*lilv;    //双精度浮点数计算
    printf("%.lf",s);    //输出一个浮点一位小数
    return 0;
}