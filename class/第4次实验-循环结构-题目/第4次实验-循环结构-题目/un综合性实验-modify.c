/*改错题：求如下分数序列的前n项之和。2/1+3/2+5/3+8/5+13/8+......
若n＝5，则应输出8.391667。请改正程序中的错误，使其得出正确的结果。*/
#include <stdio.h>
main( )
{ 
 /************found************/
	double s;
	int n,a=2,b=1,c,k; 
	printf("input n:");
	scanf("%d",&n);
/************found************/
	for(k=1,k<=n,k++) 
	{ 
/************found************/
		s=s+(Double)a/b;
		c=a; 
		a=a+b; 
		b=c; 
	}
	printf( "The value of function is:%lf\n",s); 
}




