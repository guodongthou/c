#include<stdio.h>
int main()
{
    int a,i,f1=1,f2=2;
    double ai=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        ai=ai+f2*1.0/f1;
        f2=f1+f2;
        f1=f2-f1;
    }
    printf("%.2lf\n",ai);
    return 0;
}