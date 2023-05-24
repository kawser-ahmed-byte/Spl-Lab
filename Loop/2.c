#include<stdio.h>
void main()
{
   int i, n;
   printf("Enter a value: ");
   scanf("%d", &n);
   for(i=1; i<=n; i++)
   {
       printf("%d ", 2*i-1);
   }
}

