/*给定程序中，函数fun的功能是把形参a所指数组中的偶数按原顺序依次存放到a[0]、a[1]、a[2]中，
把奇数从数组中删除，偶数个数通过函数值返回。如a所指数组中数据最初排列为9、1、4、2、3、6、5、8、7，
删除奇数后a所指数组的数据为：2、4、6、8，返回值为4。请在下划中线填入正确内容并把下划线删除，使程序得出正确结果。不得删行或减行，也不得更改程序结构。*/
#include <stdio.h>
#define  N  9
int fun(int  a[ ], int  n)
{  
	int  i,j=0;
	for (i=0; i<n; i++)
		if (___1___== 0)  
		{
			___2___ = a[i];  
			j++;
		}
	return ___3___; 
}
main()
{  
	int  b[N]={9,1,4,2,3,6,5,8,7}, i, n;
	printf("\nThe original data  :\n");
	for (i=0; i<N; i++)  
		printf("%4d ", b[i]);
	printf("\n");
	n=fun(b,N);
	printf("\nThe number of even:%d\n", n);
	printf("\nThe even:\n");
	for (i=0; i<n; i++)  
		printf("%4d ",b[i]);
	printf("\n"); 
}
