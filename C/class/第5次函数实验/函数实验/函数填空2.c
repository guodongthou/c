/*填空题
函数fun的功能是：统计长整数n的各个位上出现数字1，2，3的次数，
并通过外部变量c1，c2，c3返回主函数。例如：当n=123114350时，c1=3，c2=1，c3=2。*/
#include <stdio.h>
int c1,c2,c3;
void fun(long n)
{	
	c1=c2=c3=0;
	while(____1____)
	{	
		switch(n%10)
		{	
		    case 1:
				c1++;
				____2____;
			case 2:
				c2++;
				____3____;
			case 3:
				c3++;		
		}
		n/=10;	
	}
}
main()
{	
	long n=123114350L;
	fun(n);
	printf("\nThe result:\n");
	printf("n=%ld c1=%d c2=%d c3=%d\n",n,c1,c2,c3);
}