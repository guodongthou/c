/*求出一个2✖M整形二维数组中最大元素的值，并将此值返回调用函数*/
#define M 4
#include <stdio.h>
fun (int a[][M])
{
	int i,j,maximum=0;
	for(i=0;i<2;i++)
		for(j=0;j<M;j++)
			if(a[i][j]>maximum)
				maximum=a[i][j];
	return maximum;
}
main()
{  
	int arr[2][M]={5,8,3,90,76,-4,12,82};
	printf("max=%d\n", fun(arr));
}
