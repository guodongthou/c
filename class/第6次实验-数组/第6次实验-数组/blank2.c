 /*给定程序中，函数fun的功能是：将 a和b所指的两个字符串分别转换成面值相同的整数，并进行相加作为函数值返回，规定字符串中只含9个以下数字字符。例如，主函数中输入字符串”32486”和”12345”,则输出44831。‘0’-‘0’=0  ‘3’-‘0’=3
    请在程序的下划线处填入正确的内容并把下划线删除，使程序得出正确的结果。*/
#include  <stdio.h>
#include  <string.h>
#define  N  9
int ctod( char  s[] )
{ 
	int d=0; 
	int i=0;
	while(s[i])
	{ 
		if(s[i]>='0'&&s[i]<='9') 
		/**********found**********/
			d=d*10+s[i]-______;
		/**********found**********/
        _____;  
	}
	return  d;
}
fun( char  a[], char  b[] )
{ 
	/**********found**********/
    return   _____; 
}
main()
{ 
	char  s1[N],s2[N];
	do
	{ 
		printf("Input  string  s1 : "); 
		gets(s1); 
	}
	while( strlen(s1)>N );
	do
	{ 
		printf("Input  string  s2 : "); 
		gets(s2); 
	}
	while( strlen(s2)>N );
	printf("The result is:  %d\n", fun(s1,s2) );
}