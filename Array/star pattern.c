#include<stdio.h>
void main()
{
    int i, j, n=5;
   /* for(i=1; i<=n; i++)
    {
         for(j=1; j<=i; j++)
         {
             printf("* ");
         }
         printf("\n");
    } */
      //for(i=1; i<=n; i++)
  /*  {
         for(j=n; j>=i; j--)
         {
             printf("*");
         }
         printf("\n");
    } */
     /* for(i=1; i<=n; i++)
    {
         for(j=1; j<=n; j++)
         {
             printf("*");
         }
         printf("\n");
    } */
     // for(i=1; i<=n; i++)
   /* {
         for(j=1; j<=i; j++)
         {
             for(j=1; j<=n-i; j++)
             {
             printf(" ");
             }
             for(j=1; j<=i; j++)
             {
             printf("*");
             }
         }
         printf("\n");
    } */
   /* for(i=1; i<=n; i++)
    {
         for(j=1; j<=i; j++)
         {
             for(j=1; j<=i-1; j++)
             {
             printf(" ");
             }
             for(j=i; j<=n; j++)
             {
             printf("*");
             }
         }
         printf("\n");
    } */
    for(i=1; i<=n; i++)
    {
      for(j=1; j<=i; j++)
        {
            printf("%d",j);
        }
          printf("\n");
    }
}
