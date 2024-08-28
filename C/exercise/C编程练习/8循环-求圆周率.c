/*根据以下公式求π的值(要求满足精度x， 即某项小于x时停止迭代)：
    π        1   1×2   1×2×3 　 1×2×3×4           1×2×…×n
    ─ = 1 + ─ + ── + ──── + ───── + …… + ────────
    2         3   3×5   3×5×7 　 3×5×7×9           3×5×…×(2n+1)
    程序运行后，如果输入精度0.0005，则程序输出为3.14…。*/
#include <stdio.h>
#include <math.h>
double fun(double x)
{
	int i;
	double s=1,t1=1,t2=1;
	for(i=1;t1/t2>=x;i++)
	{
		t1=t1*i;
		t2=t2*(2*i+1);
		s=s+t1/t2;
	}
	return 2*s;

}
main( )
{ 
	double  x;
	printf("Input x:") ;
	scanf("%lf",&x); 
	printf("%lf\n",fun(x));
}
