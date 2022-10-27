/*给定程序中，函数fun的功能是用函数指针指向要调用的函数，并进行调用。
规定在第2处使f指向函数f1，在第3处使f指向函数f 2。
当调用正确时，程序输出x1=5.000000，x2=3.000000，x1*x1+x1*x2= 40.000000
请在程序的下划线处填入正确的内容并把下划线删除，使程序得出正确的结果。
注意：源程序已给出。不得增行或删行，也不得更改程序的结构！*/
#include  <stdio.h>
double f1(double  x)
{
	return  x*x;
}
double f2(double x,double y)
{
	return  x*y;
}
double fun(double  a,double b)
{
	/**********found**********/
	_1_(*f)();
	double r1,r2;
	/**********found**********/
	f=_2_;   /* point fountion f1 */
	r1=f(a);
	/**********found**********/
	f=_3_;   /* point fountion f2 */
	r2=(*f)(a,b);
	return  r1+r2; 
}
main()
{ 
	double  x1=5, x2=3, r;
	r=fun(x1,x2);
	printf("x1=%f,x2=%f,x1*x1+x1*x2=%f\n", x1,x2,r); 
}
