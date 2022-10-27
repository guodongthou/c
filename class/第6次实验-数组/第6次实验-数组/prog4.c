/*编程题
编程题
    编写程序，实现矩阵（3 行3 列）的转置（即行列互换）
    例如， 
    输入矩阵：100 200 300                   程序输出：100 400 700
              400 500 600                             200 500 800
              700 800 900                             300 600 900
			  */
#include <stdio.h>
void fun(int array[3][3])
{

}
main()
{
	int i,j;
	int array[3][3]={{100,200,300},{400,500,600},{700,800,900}};
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%7d",array[i][j]);
		printf("\n"); 
	}
	fun(array);
	printf("Converted array:\n");
	for(i=0;i<3;i++)
	{ 
		for(j=0;j<3;j++)
			printf("%7d",array[i][j]);
		printf("\n");
	}
}
