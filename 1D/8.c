#include <stdio.h>
void main()
{
   int i,n,a1[100], a2[100];
   printf("Input the number: ");
   scanf("%d",&n);
   for(i=0; i < n; i++)
      {
	  scanf("%d", &a1[i]);
	  }
	  printf("Array 1: ");
	  for(i=0; i < n; i++)
      {
	  printf("%d ", a1[i]);
	  }
   for(i=0; i<n; i++)
     {
	   a2[i] = a1[i];
	 }
	 printf("Array 2: ");
	 for(i=n-1; i >= 0 ; i--)
      {
	  printf("%d ", a2[i]);
	  }
}



