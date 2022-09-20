#include<stdio.h>
int main()
{
    char s[11];
    gets(s);
    for (int i = 0;s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = (s[i] + 4 - 'A') % 26 + 'A';
        }
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = (s[i] + 4 - 'a') % 26 + 'a';
        }
    }
    puts(s);
    return 0;
}