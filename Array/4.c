#include<stdio.h>
void main()
{
    int array[100];
    int i, n, sum=0;
    printf("Enter a value: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        if(i%2==0)
        {
            sum=sum+array[i];
        }
    }
    printf("%d\n", sum);
}

