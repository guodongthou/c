#include<stdio.h>
#define PAI 3.14
#include<math.h>
int main()
{
	system("mode con cp select=65001");
	float r,c,s,v;
	printf("������Բ�İ뾶\n");
	scanf("%f",&r);
	c=2*r*PAI;
	s=pow(r,2)*PAI;
	v=4/3*PAI*pow(r,3);
	printf("�ܳ�=%.2f ���=%.2f ���=%.2f",c,s,v);
    return 0;
}