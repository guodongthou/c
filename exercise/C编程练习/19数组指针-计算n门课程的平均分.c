/*计算n门课程的平均分，计算结果作为函数值返回。
若有5门课程的成绩是：90.5, 72, 80, 61.5, 55
则平均分71.80。*/
#include <stdio.h>
float  fun ( float  *a ,  int  n )
{

}
main()
{ 
	float score[30]={90.5, 72, 80, 61.5, 55}, aver;
	aver = fun( score, 5 );
	printf( "\nAverage score  is: %5.2f\n", aver);
}


