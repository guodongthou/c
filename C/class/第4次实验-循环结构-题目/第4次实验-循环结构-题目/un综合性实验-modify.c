/*�Ĵ��⣺�����·������е�ǰn��֮�͡�2/1+3/2+5/3+8/5+13/8+......
��n��5����Ӧ���8.391667������������еĴ���ʹ��ó���ȷ�Ľ����*/
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




