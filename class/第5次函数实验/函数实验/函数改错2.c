/*�Ĵ���
 ���³�����, ����fun �Ĺ����ǣ�������������С��������
     ���磬���������еı���x1��x2��x3 �ֱ�����15  11  2����������Ӧ���ǣ�330����*/
#include<stdio.h>
#include <stdio.h>
/************found************/
fun(int x, y, z)
{ 
	int j=1,t,n,m;
	t=j%x;
	m=j%y;
	n=j%z;
	while(t!=0||m!=0||n!=0)
	{ 
		j=j+1;
		t=j%x;
		m=j%y;
		n=j%z;
	}
 /************found************/
   return i;
}
main()
{ 
  int x1,x2,x3,j ;
  scanf("%d%d%d", &x1,&x2,&x3);
  j=fun(x1,x2,x3);
  printf("The minimal commonmultiple is : %d\n",j);
}
