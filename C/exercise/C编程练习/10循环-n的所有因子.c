/*计算正整数n的所有因子（1和n除外）之和，如n=856时，值为763。*/
#include <stdio.h>
int fun(int n)
{
	int i,sum=0;
	for(i=2;i<n;i++) {
		if(n%i==0) {
			sum+=i;
		}
	}
	return sum;
}
main()
{
	int n,sum;
	printf("Input n: "); 
	scanf("%d",&n);
	sum=fun(n);
	printf("sum=%d\n",sum);
}