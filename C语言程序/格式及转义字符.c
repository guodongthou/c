#include<stdio.h>
int main()
{
	char ch1='a',ch2='b',ch3='c';
	int a=42;
	float b=12.3478;
	printf("%d\n",a);
	printf("%5d\n",a);
	printf("%7d\n",a);
	printf("%5d\n",a);
	printf("%1d\n",a);
	printf("%f\n",b);
	printf("%13f\n",b);
	printf("%3f\n",b);
	printf("%6.3f\n",b);
	printf("%6.1f\n",b);
	printf("%6.0f\n",b);
	printf("\a\a\a\aa=%d%cb\tc%c\tbc\n\nok\n",ch1,ch2,ch3);
    return 0;
}