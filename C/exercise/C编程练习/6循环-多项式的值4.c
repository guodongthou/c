/*：根据以下公式，如n的值为11时，值为：1.833333
             1        1                 1
    S = 1 + ── + ─── + …… + ────── 
            1+2　　 1+2+3       　　1+2+3+…+n     */
#include <stdio.h>
float fun(int n)
{
    int i,t=0;
    float sum=0;
    for(i=1;i<=n;i++) {
        t+=i;
        sum+=1.0/t;
    }
    return sum;
}
main()
{   
	int n;
	float s;
    scanf("%d",&n);
    s=fun(n);
    printf("s=%f\n",s);
}