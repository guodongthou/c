/*函数fun的功能是：判断ch中的字符是否与str所指串中的某个字符相同；
若相同，什么也不做，若不同，则将其插在传的最后。请改正程序中的两处错误*/
#include <stdio.h>
#include <string.h>
/**********found**********/
void fun(char str, char ch)
{
	while (*str && *str != ch)   
		str++;
/**********found**********/
    if (*str == ch)
	{
		str [0] = ch;
/**********found**********/
        str[1] = '0';
    }
}
main()
{ 
	char s[81], c ;
	printf("\nPlease enter a string:\n"); 
	gets (s);
	printf ("\n Please enter the character to search : ");
    c = getchar();
    fun(s,c);
    printf("\nThe result is %s\n", s);
}