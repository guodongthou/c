/*�Ĵ���
��������fun�Ĺ����ǰ�m(1<=m<=10)���ַ����������������һ���´�������pt�С�
���3����"abc"��"CD"��"EF"���������������"abcCDEF"�� ����������е���������ʹ���ܵó���ȷ�Ľ����
ע�⣺�������л�ɾ�У�Ҳ�����޸ĳ���Ľṹ��*/
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

