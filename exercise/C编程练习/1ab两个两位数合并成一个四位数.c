/*两个两位数a、b合并成一个四位数c中。
合并的方式：a的十位和个位分别放在c的百位和个位，b的十位和个位数分别放在c的千位和十位*/
#include <stdio.h>
fun(int a,int b)
{
	int c;
	c=b/10*1000+a/10*100+b%10*10+a%10;
	return c;
}
main()   
{  
	int a,b,c;
	scanf("%d%d",&a,&b);
	c=fun(a,b);
	printf("c=%d\n",c);
}
