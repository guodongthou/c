/*改错题
给定函数fun的功能是把m(1<=m<=10)个字符串连接起来，组成一个新串，放入pt中。
如把3个串"abc"、"CD"、"EF"连接起来，结果是"abcCDEF"。 请改正程序中的两个错误，使它能得出正确的结果。
注意：不得增行或删行，也不得修改程序的结构。*/
#include <conio.h>
#include <stdio.h>
#include <string.h>
int  fun ( char  str[][10], int  m, char  pt[] )
{ 
	/************found************/
	Int  k, q, i ;
	for ( k = 0; k < m; k++ )
	{  
		q=strlen(str[k]);
		for (i=0; i<q; i++)
			/***********found************/
			pt[i]=str[k,i] ;
		pt+=q;
		pt[0]=0;   
	} 
}
main( )
{    
	int  n, h ;
    char s[10][10], p[120] ;
    printf( "\nPlease enter  n:" ) ;
    scanf("%d", &n) ;
    printf( "\nPlease enter  %d string:\n", n ) ;
    for ( h=0; h<n; h++) 
		scanf("%s", s[h]) ;
    fun(s, n, p) ;
	printf( "\nThe result is : %s\n", p) ;
}

