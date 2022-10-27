/*编程题：n是一个整数，计算并输出该数各位数之和。如n值为5923，则输出19；若n值为123，则输出6。*/
#include<stdio.h>
main()
{ 
	int n;
	int s=0;      
	printf("请输入一个整数：\n");
	scanf("%d",&n);
    //请补充完整以下的代码
	while(n>0) {
		s+=n%10;
		n/=10;
	}
	printf("%d",s);

}

