/*�����
���дһ������fun���ҳ�һά��������Ԫ��������ֵ������Ԫ���е�ֵ�����������и��衣��������x����������n��x�е����ݸ�����*/
#include <stdlib.h>
#include <stdio.h>
int fun(int a[],int n)
{

}
main()
{ 
	int i,x[20],max,n=10;
	for(i=0;i<n;i++) 
	{
		x[i]=rand()%50; 
		printf("%4d", x[i]);
	}
	printf("\n");
	max=fun(x,n);
	printf("Max=%5d\n",max);
}
