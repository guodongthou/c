/*将s所指字符串中下标为奇数、同时ASCII值也为奇数的字符删除，串中剩余的字符形成一个新串放在t所指的数组中。
    例如：若s所指串中的内容为：“ABCDEFG12345”，其中C的ASCII码值虽为奇数，但在数组中的下标为偶数，因此不能删除，而字符1的ASCII码值为奇数，在数组中的下标也为奇数，因此应当删除，其他依次类推。最后，t所指的数组中的内容是“ABCDEFG24”。*/
#include <stdio.h>
#include <string.h>
void fun(char *s,char t[])
{

}
main()
{
   char s[100],t[100];
   printf("\nPlease enter string S:");scanf("%s",s);
   fun(s,t);
   printf("\nThe result is:%s\n",t);
  
}


