/*��1��m֮�ڣ���m���ܱ�7��11����������������������a�У�ͨ��n���ظ�����*/
#include <stdio.h>
#define M 80
int fun(int m,int a[])
{
    int i,j=0;
    for(i=1;i<=m;i++)
        if(i%7==0||i%11==0)
            a[j++]=i;
    return j;
}
main()
{
    int aa[M],n,k;
    n=fun(50,aa);
    for(k=0;k<n;k++)
		printf("%4d",aa[k]);
}
