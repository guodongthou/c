/*�����
��������N��N�Ķ�ά���飬�������������Զ���ֵ�����д����fun(int a[ ][N])��
�����Ĺ�����ʹ�������ϰ�����Ԫ���е�ֵȫ����0��
ע�⣺����Դ�����Ѹ���������Ķ�������main�����������е��κ����ݣ����ں���fun�Ļ���������������д��������䡣
���磺a�����е�ֵΪ��
1  9  7                                     
2  3  8    
6  5  6      
�򷵻��������a�����е�ֵӦΪ��
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


