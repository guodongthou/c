#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int i,date;
    int left=0,right=100;
    srand((unsigned int)time(NULL));
    date = rand()%100+1;
    printf("Please input a number from %d to %d:\n",left,right);
    scanf("%d",&i);
    while(i!=date)
    {
        if(i>date)
        {
            printf("It's bigger than the number\n");
            right=i;
            printf("Please input a number from %d to %d:\n",left,right);
        }
        else
        {
            printf("It's smaller than the number\n");
            left=i;
            printf("Please input a number from %d to %d:\n",left,right);
        }
        scanf("%d",&i);
    }
    if(i==date)
    {
        printf("You've got the right number.\n");
    }
    return 0;
}