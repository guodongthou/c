/*����������n���������ӣ�1��n���⣩֮�ͣ���n=856ʱ��ֵΪ763��*/
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