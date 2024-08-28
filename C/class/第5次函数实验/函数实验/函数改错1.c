/*改错题
    给定函数fun 的功能是：根据整型形参n，计算如下公式的值。
 
    例如，若 n=10，则应输出：0.617977。
    请改正程序中的语法错误，使它能得出正确的结果。
    注意：不要改动 main 函数，不得增行或删行，也不得更改程序的结构。*/
#include <stdio.h>
/************found************/
void fun (int n)
{ 
   float A=1; int i;
   /************found************/
   for (i=2; i<n; i++)
      A = 1/(1+A);
   return A ;
}
main()
{  int n ;
   scanf("%d", &n);
   printf("A%d=%f\n", n, fun(n));
}
