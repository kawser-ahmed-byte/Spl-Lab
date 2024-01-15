#include <stdio.h>
void main()
{
   int i,n,a[100];
   printf("Input the number: ");
   scanf("%d",&n);
   for(i=0; i < n; i++) //for taking user input
      {
	  scanf("%d", &a[i]);
	  }
   for(i=n-1; i>=0; i--) //for printing result
     {
	   printf("%d ", a[i]);
	 }
}


