/*学生的记录由学号、8门课程成绩和平均分组成，学号和8门课程的成绩已在主函数中给出。请编写函数fun，它的功能是：求出该学生的平均分放在记录的ave成员中。请自己定义正确的形参。
学生的成绩是：85.5,76,69.5,85,91,72,64.5,87.5，平均分是：78.875。*/
#include <stdio.h>
#define N 8
typedef struct
{   
	char num[10];
    double s[N];
    double ave;
}STREC;
void fun(STREC *p)
{

}
main()
{   STREC s={"GA005",85.5,76,69.5,85,91,72,64.5,87.5};
    int i;
    fun(&s);
    printf("The %s's student data:\n",s.num);
    for(i=0;i<N;i++)
       printf("%4.1f\n",s.s[i]);
    printf("\nave=%7.3f\n",s.ave);
}