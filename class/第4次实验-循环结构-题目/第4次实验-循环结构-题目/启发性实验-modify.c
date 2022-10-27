/*改错题：下面程序求n以内(包括n)能被3或7整除的所有自然数的倒数之和。用下列数据验证程序：
Enter n:           (输入提示)
30<CR>          (从键盘输入30,<CR>代表Enter键)
s=1.226323       */
#include <stdio.h>
main()
{
  int n,i;
  double s=0.0;
  printf("Enter n:\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++) {  //原程序：for(i=1;i<n;i++)
      if(i%3==0||i%7==0)//原程序：if(i/3==0||i/7==0)
           s+=1.0/i;//原程序：s+=1/i;
  }
  printf("s=%lf\n",s);
}