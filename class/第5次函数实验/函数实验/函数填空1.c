/*填空题
请补充fun函数，fun函数的功能是：计算并输出n(包括n)以内能被3或7整除的所有自然数的倒数之和。如在主函数中输入50，输出为s=1.425889。
注意：部分源程序已给出。输入并调试程序，使程序得出正确结果不得增行或删行，也不得更改程序的结构！仅在fun函数的横线上填入。*/
#include <stdio.h>
double fun(___1___)
{
	int  i;
	double  sum=0.0;
	for (i=1;i<=n; i++)
		if (___2___)
			sum += 1.0/i;
	return sum; 
}
main()
{
	int  m;	
	double  s;
	printf("\nInput n: ");
	scanf("%d", &m);
	s = ___3___;
	printf("\n\ns=%f\n", s); 
}
