/*求n以内（不包括n）同时能被3与7整除的所有自然数之和的平方根s，
如若n为1000时，s=153.909064。*/
#include <math.h>
#include <stdio.h>
double fun(int n)
{
    int i;
    float t,sum=0;
    for(i=1;i<=n;i++)
        if(i%3==0&&i%7==0)
            sum+=i;
    t=sqrt(sum);
    return t;
}
main() 
{   
    printf("s=%lf\n",fun(1000));   
}
