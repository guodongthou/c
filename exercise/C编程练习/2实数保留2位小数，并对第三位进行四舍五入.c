/*��һ��ʵ������2λС�������Ե���λ������������*/
#include <stdio.h>
float fun (float h)
{
	float number;
	number=(int)(h*100+0.5);
	number=(float)(number/100);
	return number;
}
main( )
{   
	float a;
	scanf("%f",&a);
    printf("The result:%f\n",fun(a));
}

