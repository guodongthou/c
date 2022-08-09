#include<stdio.h>
int main()
{
    int n,i;
    double t=0,a=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {
            t+=1.0/a;
            a++;
        }
    printf("%.6lf",t);
    return 0;
}