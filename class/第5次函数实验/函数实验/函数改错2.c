/*改错题
 以下程序中, 函数fun 的功能是：求三个数的最小公倍数。
     例如，给主函数中的变量x1、x2、x3 分别输入15  11  2，则输出结果应当是：330。。*/
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
