/*函数fun:将两个两位数a,b合并形成一个c中。
合并方式是将a数的十位和个位数依次放在c位数的个位和百位上，
b数的十位和个位数依次放在c数数的千位和十位上。如当a=45,b=12,调用该函数后c=1524。*/
#include<stdio.h>
#include<stdio.h>
void fun(int a,int b,long  *c)
{ 

}
main( )
{
	int a,b;
	long c;
	scanf("%d%d",&a,&b);
	fun(a,b,&c);
	printf("The result is %ld\n",c);
}
