/*计算正整数n的所有因子（1和n除外），如n=120时，值为239。*/
#include <stdio.h>
int fun(int n)
{
    int i,sum=0;
    for(i=2;i<n;i++) {
        if(n%i==0) {
            sum+=i;
        }
    }
    return sum;
}
main()  
{  
    printf("%d\n",fun(120));
}