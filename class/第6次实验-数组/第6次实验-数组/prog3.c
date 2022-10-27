/*编程题
程序定义了N×N的二维数组，并在主函数中自动赋值。请编写函数fun(int a[ ][N])，
函数的功能是使数组右上半三角元素中的值全部置0。
注意：部分源程序已给出。请勿改动主函数main和其他函数中的任何内容，仅在函数fun的花括号中填入所编写的若干语句。
例如：a数组中的值为：
1  9  7                                     
2  3  8    
6  5  6      
则返回主程序后a数组中的值应为：
0  0  0
2  0  0
6  5  0 
*/
#include <stdio.h>
#include <stdlib.h>
#define    N    5
int fun(int a[][N])
{ 

}
main()
{ 
	int  a[N][N],i,j;
	printf("***The array***\n");
	for(i=0;i<N;i++)
	{ 
		for(j=0;j<N;j++)
		{ 
			a[i][j]=rand()%20;
			printf("%4d",a[i][j]);
		}
		printf("\n"); 
	}
    fun(a);
    printf("THE  RESULT\n");
    for(i=0; i<N; i++)
	{
		for(j=0;j<N;j++)
			printf("%4d",a[i][j]);
		printf("\n");  
	}
}


