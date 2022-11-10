/*从字符串中删除指定的字符。*/
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
    printf("输入一个字符：");
    scanf("%c",&ch);
    fun(str,ch);
    puts(str);  
}

