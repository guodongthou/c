#include<stdio.h>
int main()
{
    double lilv;
    int yue,zongjin;
    scanf("%d %lf %d",&zongjin,&lilv,&yue);
    double s=zongjin*10000/yue+(zongjin*10000)*lilv;
    printf("%.0lf",s);
    return 0;
}