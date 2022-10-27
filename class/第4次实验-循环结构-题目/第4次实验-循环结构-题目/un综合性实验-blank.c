/*填空题：从键盘输入m,计算如下公式的值：
1/(100*100)+1/(200*200)+1/(300*300)+......+1/(m*m)
运行结果如下：
2000<CR> 
The result is 0.000160    */
#include <stdio.h>
main( )
{   
	int m,i,d;
    double y = 0;
    scanf("%d",%m);
    for(i=100;i<=m;i++)
	{  	
		d=i*i;
		y+=;	
	}
	    printf( "The result is %lf\n",y);
}




