/*使数组右上半角元素的值全部置成0*/
#include<stdio.h>
#include<stdlib.h>
#define  N  5
int  fun ( int a[][N] )
{
    int i,j;
    for(i=0;i<N;i++){
      for(j=0;j<N;j++) {
         if(j>i) {
            a[i][j]=0;
         }
      }
    }   
}

main ( )
{
    int a[N][N],i,j;
    printf("***** The array *****\n");
    for ( i =0;  i<N; i++ )
    {
        for ( j =0; j<N; j++ )
           {
            a[i][j] = rand()%20;
            printf( "%4d", a[i][j] );
           }
        printf("\n");
       }
   fun ( a );
   printf ("THE  RESULT\n");
   for ( i =0;  i<N; i++ )
   {
      for ( j =0; j<N; j++ )
          printf( "%4d", a[i][j] );
      printf("\n");
   }
}
