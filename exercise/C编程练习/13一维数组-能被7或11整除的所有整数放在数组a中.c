/*求1到m之内（含m）能被7或11整除的所有整数放在数组a中，通过n返回个数。*/
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
