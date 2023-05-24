#include <stdio.h>
void main()
{
    int arr1[100];
    int i, max, min, n, maxIndex, minIndex;
     printf("Input the value :");
     scanf("%d",&n);
     maxIndex=minIndex=0;
     for(i=0;i<n;i++)
        {
	      scanf("%d",&arr1[i]);
	    }
      max = arr1[0];
      min = arr1[0];
     for(i=1; i<n; i++)
   {
        if(arr1[i]>max)
        {
            max = arr1[i];
            maxIndex=i;
        }

        if(arr1[i]<min)
        {
            min = arr1[i];
            minIndex=i;
        }
    }
    printf("%d is Maximum at %d Index\n", max, maxIndex);
    printf("%d is Minimum at %d Index", min, minIndex);
}
