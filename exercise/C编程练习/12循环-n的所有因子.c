/*����������n���������ӣ�1��n���⣩����n=120ʱ��ֵΪ239��*/
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