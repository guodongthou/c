/*���ַ�����ɾ��ָ�����ַ���*/
#include <stdio.h>
fun(char s[],int c)
{
    int i,j=0;
    for(i=0;s[i]!=0;i++)
        if(s[i]!=c)
            s[j++]=s[i];
    s[j]='\0';
}
void main()
{
    char str[]="turbo c and borland c++";
    char ch;
    printf("����һ���ַ���");
    scanf("%c",&ch);
    fun(str,ch);
    puts(str);  
}

