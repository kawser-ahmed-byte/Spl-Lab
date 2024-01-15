#include <stdio.h>
void main()
{
    int arr1[100];
    int i, mx, mn, n,mx_p,mn_p;
       printf("size? :");
       scanf("%d",&n); //for taking user input
       printf("Input %d elements:\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]); //for taking user input
	    }
    mx = arr1[0];
    mn = arr1[0];
    for(i=1; i<n; i++)
    {
        if(arr1[i]>mx)
        {
            mx = arr1[i];
            mx_p=i;
        }
        if(arr1[i]<mn)
        {
            mn = arr1[i];
            mn_p=i;
        }
    }
    printf("Max %d index: %d\n", mx,mx_p);
    printf("Min %d index: %d", mn,mn_p);
    return 0;
}
