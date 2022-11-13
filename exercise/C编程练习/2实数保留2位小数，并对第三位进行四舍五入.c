/*将一个实数保留2位小数，并对第三位进行四舍五入*/
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

