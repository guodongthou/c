/*���������к���fun�Ĺ����Ƿֱ�ͳ���ַ�����д��ĸ��Сд��ĸ�ĸ�����
����ַ�������AaaaBBb123CCccccd,��Ӧ������upper=5,lower=9������������еĴ���ʹ�����������ȷ�Ľ����
ע�⣺��Ҫ�Ķ�main����, ����ɾ�л���С�*/
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
