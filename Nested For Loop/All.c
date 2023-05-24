#include <stdio.h>
void main()
{
   int i,j,n;
   printf("Input number of rows for this pattern :");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     for(j=1;j<=n-i;j++)
     printf(" ");
     for(j=1;j<=2*i-1;j++)
       printf("*");
     printf("\n");
   }

}
#include <stdio.h>

void main()
  {
   int i, j;
   char alph = 'A';
   int n,blk;
   int ctr = 1;

   printf("Input the number of Letters (less than 26) in the Pyramid : ");
   scanf("%d", &n);

   for (i = 1; i <= n; i++)
	{
	for(blk=1;blk<=n-i;blk++)

	printf("  ");
      for (j = 0; j <= (ctr / 2); j++) {
         printf("%c ", alph++);
      }

      alph = alph - 2;

      for (j = 0; j < (ctr / 2); j++) {
         printf("%c ", alph--);
      }
      ctr = ctr + 2;
      alph = 'A';
      printf("\n");
   }
}

SUM of Series
#include <stdio.h>

void main()
{
  int n,i;
  long sum=0;
  long int t=1;
  printf("Input the number of terms : ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
     printf("%ld  ",t);
      if (i<n)
      {
          printf("+ ");

      }
     sum=sum+t;
     t=(t*10)+1;
  }
  printf("\nThe Sum is : %ld\n",sum);
}
Diamond
#include <stdio.h>

void main()
{
   int i,j,r;
   printf("Input number of rows (half of the diamond) :");
   scanf("%d",&r);
   for(i=0;i<=r;i++)
   {
     for(j=1;j<=r-i;j++)
     printf(" ");
     for(j=1;j<=2*i-1;j++)
       printf("*");
     printf("\n");
   }

   for(i=r-1;i>=1;i--)
   {
     for(j=1;j<=r-i;j++)
     printf(" ");
     for(j=1;j<=2*i-1;j++)
       printf("*");
     printf("\n");
   }

}
Pascal
#include <stdio.h>

void main()
{
    int no_row,c=1,blk,i,j;
    printf("Input number of rows: ");
    scanf("%d",&no_row);
    for(i=0;i<no_row;i++)
    {
        for(blk=1;blk<=no_row-i;blk++)
        printf("  ");
        for(j=0;j<=i;j++)
        {
            if (j==0||i==0)
                c=1;
            else
               c=c*(i-j+1)/j;
            printf("% 4d",c);
        }
        printf("\n");
    }
}

