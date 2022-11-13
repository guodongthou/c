#include <stdio.h>
main()
{
    double n, g, f;
    scanf("%lf",&n);
    g = 2 * n + 1;
    f = (g + 1) * (g + 1);
    printf("%.2f", f);
}