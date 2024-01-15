#include <stdio.h>
void main()
{
   int i,n,a[100], sum=0;
   printf("Input the number: ");
   scanf("%d",&n); //for taking user input
   for(i=0; i < n; i++)
      {
	  scanf("%d", &a[i]);
	  if(i%2 == 0)
      {
         sum = sum + a[i];
      }
	  }
   for(i=0; i<n; i++)
     {
	   printf("%d ", a[i]);
	 }
	 printf("%d ", sum);
}





