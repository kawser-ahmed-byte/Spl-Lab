#include<stdio.h>
 void print (int b[], int ar[][2])
{
     int i, j;
     printf("First Array:\n");
     for(i=0; i<5; i++)
     {
         printf("%d ", b[i]);
     }
     printf("\nSecond Array: ");
     for(i=0; i<3; i++)
     {
          for(j=0; j<2; j++)
        {
         printf("%d ", ar[i][j]);
        }
         printf("\n");
     }
}
int main()
{
    int b[10], ar[3][2];
    int i,j;
    for(i=0; i<5; i++)
     {
         b[i]=i*2;
     }
     for(i=0; i<3; i++)
     {
          for(j=0; j<2; j++)
          {
           ar[i][j]=i+j;
          }
         print(b, ar);
     }
    return 0;
}


