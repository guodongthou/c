/*ѧ���ļ�¼��ѧ�š�8�ſγ̳ɼ���ƽ������ɣ�ѧ�ź�8�ſγ̵ĳɼ������������и��������д����fun�����Ĺ����ǣ������ѧ����ƽ���ַ��ڼ�¼��ave��Ա�С����Լ�������ȷ���βΡ�
ѧ���ĳɼ��ǣ�85.5,76,69.5,85,91,72,64.5,87.5��ƽ�����ǣ�78.875��*/
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