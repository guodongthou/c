#include<stdio.h>
int main()
{
    char a;
    int b;
    float c;
    double d;
    scanf("%c %d %f %lf",&a,&b,&c,&d);
    printf("%c %4d %.2f %.12lf",a,b,c,d);
    return 0;
}