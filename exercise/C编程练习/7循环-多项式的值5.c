/*它的功能是：计算并输出下列级数和：
           1        1                1
    s = ─── + ─── + …… + ─────
         1×2     2×3            n×(n+1)*/
#include <stdio.h>
double fun(int n)
{
    int i,t,m;
    double sum=0;
    scanf("%d",&m);
    for(i=1;i<=m;i++) {
        t=i*(i+1);
        sum=1.0/t;
    }
    return sum;
}
main()  
{  
    printf("%f\n",fun(10)); 
}