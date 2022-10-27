/*给定程序中函数fun的功能是分别统计字符串大写字母和小写字母的个数。
如给字符串输入AaaaBBb123CCccccd,则应输出结果upper=5,lower=9。请改正程序中的错误，使程序能输出正确的结果。
注意：不要改动main函数, 不得删行或减行。*/
#include <conio.h>
#include <stdio.h>
/********found********/
void fun(char  *s, int  a, int  b)
{	
	while (*s)
	{	/********found********/
		if (*s>='A' && *s<='Z')
			a++;
		/********found********/
		if (*s>='a' && *s<='z')
			b++;
		s++;	
	} 
}
main()
{	
	char s[100]; 
	int upper=0, lower=0;
	printf("\nPlease a string : ");
	gets(s);
	fun(s, &upper, &lower);
	printf("\n upper=%d lower=%d\n", upper, lower);
}
