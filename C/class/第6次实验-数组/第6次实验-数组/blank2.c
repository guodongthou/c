 /*���������У�����fun�Ĺ����ǣ��� a��b��ָ�������ַ����ֱ�ת������ֵ��ͬ�������������������Ϊ����ֵ���أ��涨�ַ�����ֻ��9�����������ַ������磬�������������ַ�����32486���͡�12345��,�����44831����0��-��0��=0  ��3��-��0��=3
    ���ڳ�����»��ߴ�������ȷ�����ݲ����»���ɾ����ʹ����ó���ȷ�Ľ����*/
#include  <stdio.h>
#include  <string.h>
#define  N  9
int ctod( char  s[] )
{ 
	int d=0; 
	int i=0;
	while(s[i])
	{ 
		if(s[i]>='0'&&s[i]<='9') 
		/**********found**********/
			d=d*10+s[i]-______;
		/**********found**********/
        _____;  
	}
	return  d;
}
fun( char  a[], char  b[] )
{ 
	/**********found**********/
    return   _____; 
}
main()
{ 
	char  s1[N],s2[N];
	do
	{ 
		printf("Input  string  s1 : "); 
		gets(s1); 
	}
	while( strlen(s1)>N );
	do
	{ 
		printf("Input  string  s2 : "); 
		gets(s2); 
	}
	while( strlen(s2)>N );
	printf("The result is:  %d\n", fun(s1,s2) );
}