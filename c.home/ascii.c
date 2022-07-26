#include <stdio.h>
int main()
{
    int i,count=0,x[5];             //count统计位数，x[5]储存数字
    for (i=0;i<5;i++)
    {
        int temp=0;
        temp=getchar();             //temp临时储存数字字符的ASCII码
        if (temp==10) break;      //输入换行\n后跳出for循环
        count++;
        x[i]=temp-48;               //字符0的ASCII码是48
    }
    printf("%d\n",count);
    for (i=0;i<=count-2;i++) printf("%d ",x[i]);
    printf("%d\n",x[i]);
    for (i=count-1;i>=0;i--) printf("%d",x[i]);
    return 0;
}