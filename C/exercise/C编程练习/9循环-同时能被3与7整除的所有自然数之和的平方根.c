/*��n���ڣ�������n��ͬʱ�ܱ�3��7������������Ȼ��֮�͵�ƽ����s��
����nΪ1000ʱ��s=153.909064��*/
#include <math.h>
#include <stdio.h>
double fun(int n)
{
    int i;
    float t,sum=0;
    for(i=1;i<=n;i++)
        if(i%3==0&&i%7==0)
            sum+=i;
    t=sqrt(sum);
    return t;
}
main() 
{   
    printf("s=%lf\n",fun(1000));   
}
