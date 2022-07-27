#include <stdio.h>
 
int main()
{
    int n;
    scanf("%d", &n);
 
    int tmp = 0;
    int sum = 0;
 
    int i;
    for (i = 0; i < n; i++)
    {
        tmp = tmp * 10 + 2; //找到每一项之间的关系
        sum += tmp;
    }
    printf("%d\n", sum);
 
    return 0;
}