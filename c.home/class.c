#include<stdio.h>
#include<math.h>
int main()
{
    int x;
    float y;
    scanf("%d",&x);
    if(x<0)
    {
        y=fabs(x);
    }
    else if(0<=x&&x<2)
    {
        y=sqrt(x+1);
    }
    else if(2<=x&&x<4)
    {
        y=(x+2)*(x+2);
    }
    else if(4<=x)
    {
        y=2*x+5;
    }
    printf("%.2f",y);
    return 0;
}