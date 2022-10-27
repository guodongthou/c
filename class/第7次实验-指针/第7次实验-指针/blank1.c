/*给定程序中，函数fun的功能是将形参s所指字符串中的数字字符转换成对应的数值，计算出这些数值的累加和作为函数值返回。
如形参s所指的字符串为abs5def126jkm8，程序执行后的输出结果为22。
请在程序的下划线处填入正确的内容并把下划线删除，使程序得出正确的结果。注意：不得增行或删行，也不得更改程序的结构！*/
#include  <stdio.h>
#include  <string.h>
#include  <ctype.h>
int fun(char *s)
{ 
	int sum=0;
	while(*s) 
	{/**********found**********/
		if(isdigit(*s)) 
			sum+=*s-_1_;
		/**********found**********/
		_2_;
	}
	/**********found**********/
	return _3_;
}
main()
{ 
	char s[81]; 
	int n;
	printf("\nEnter a string:\n\n");
	gets(s);
	n=fun(s);
	printf("\nThe result is:  %d\n\n",n); 
}
