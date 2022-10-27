/*计算s=(In(1)+In(2)+In(3)+……+In(m))^0.5，s作为函数值返回。
  可调用log(n)函数求In(n)。如m的值为20，输出6.506583。*/
#include <math.h>
#include <stdio.h>
double fun( int m)
{
	double s=0;
	int i;
	for(i=1;i<=m;i++)
		s=s+log(i);
	return sqrt(s);
}
main()
{  
	printf("%lf\n",fun(20));
}
