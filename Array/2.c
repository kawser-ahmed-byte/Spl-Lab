#include<stdio.h>
void main()
{
    int array[100];
    int i, n, sum=0;
    printf("Enter an Input: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        sum=sum+array[i];
    }
    printf("%d", sum);
}
