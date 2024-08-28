/*计算并输出下列多项式的值：
  S = 1 + 1/1! + 1/2! + 1/3! + 1/4! + ... + 1/n!
  如n输入15，则输出s=2.718282。*/
#include <stdio.h>
double  fun(int  n)
{
	int i,t=1;
	double s=1;
	for(i=1;i<=n;i++)
	{
		t=t*i;
		s=s+1.0/t;
	}
	return s;

}
main()
{  
	int  n;     
	double  s;
	printf("Input n:  ");  
	scanf("%d",&n);
	s=fun(n);
	printf("s=%lf\n",s);
}


