/*����s=(In(1)+In(2)+In(3)+����+In(m))^0.5��s��Ϊ����ֵ���ء�
  �ɵ���log(n)������In(n)����m��ֵΪ20�����6.506583��*/
#include <math.h>
#include <stdio.h>
double fun( int m)
{
	double s=0;
	int i;
	for(i=1;i<=m;i++)
		s=s+log(i);
	return sqrt(s);
}
main()
{  
	printf("%lf\n",fun(20));
}
