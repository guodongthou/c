/*编程题
假定输入的字符串中只包含字母和*号。请编写函数fun，它的功能是：将字符串中的*号全部删除。
例如，字符串中的内容为：****A*BC*DEF*G*******，删除后，字符串中的内容应当是:ABCDEFG。
在编写函数时，不得使用C语言提供的字符串函数。*/
#include <stdio.h>
void fun(char a[])
{

}
main()
{ 
	char s[81];
	printf("Enter a string:\n");
	gets(s);
	fun(s);
	printf("The string after deleted:\n");
	puts(s);
}
