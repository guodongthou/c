/*������λ��a��b�ϲ���һ����λ��c�С�
�ϲ��ķ�ʽ��a��ʮλ�͸�λ�ֱ����c�İ�λ�͸�λ��b��ʮλ�͸�λ���ֱ����c��ǧλ��ʮλ*/
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
