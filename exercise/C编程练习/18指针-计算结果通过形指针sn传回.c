/*根据以下公式计算s，计算结果通过形指针sn传回；s通过形参传入。
           1      1      1     1     　　   (-1)^n 
    sn = ── - ── + ── - ── +　……　────
           1      3      5     7        　　　2n+1
    例如：若n的值为11时，输出的结果是：S=0.764601  N=11。*/
#include <stdio.h>
void fun(float *sn,int n)
{

}
main()
{    
	int n=11;
	float s;
	fun(&s,n);
	printf("S=%f N=%d\n",s,n);
}