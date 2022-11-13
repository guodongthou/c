/*计算多项式的值，n输入8后，输出s=0.662872。
        1      1    1          1      1
S=(1 - ─) + (─ - ─) +…+ (── - ──)
        2      3    4        2n-1    2n    */
#include <stdio.h>
double fun(int  n)
{
}
main()
{ 
	int  n;    
	double  s;
	scanf("%d",&n);
	s=fun(n);
	printf("s=%lf\n",s);
}
