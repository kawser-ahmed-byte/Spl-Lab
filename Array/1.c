#include<stdio.h>
void main()
{
    int array[100];
    int i, n;
    printf("Enter an input: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    for(i = n-1; i >= 0; i--)
    {
        printf("%d ", array[i]);
    }
}
