/*编程题
请编写一个函数fun：找出一维整型数组元素中最大的值。数组元素中的值已在主函数中赋予。主函数中x是数组名，n是x中的数据个数。*/
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
