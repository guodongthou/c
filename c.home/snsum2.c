#include<stdio.h>
#include<math.h>
main()
{
    int a,b,c,i;
    double a1=0,b1=0,c1=0;    //先赋值，否则会出错
    scanf("%d%d%d",&a,&b,&c);
    for(i=1;i<=a;i++)    //从1-a循环，注意i<=a
    {
        a1=a1+i;    //1-a的和
    }
    for(i=1;i<=b;i++)
    {
        b1=b1+pow(i,2);
    }
    for(i=1;i<=c;i++)
    {
        c1=c1+1.0/i;    //注意1.0，否则后面除不出小数
    }
    printf("%.2lf",a1+b1+c1);
    return 0;
}