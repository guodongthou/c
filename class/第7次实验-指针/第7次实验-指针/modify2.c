/*����fun�Ĺ����ǣ��ж�ch�е��ַ��Ƿ���str��ָ���е�ĳ���ַ���ͬ��
����ͬ��ʲôҲ����������ͬ��������ڴ����������������е���������*/
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