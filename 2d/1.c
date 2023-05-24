#include<stdio.h>
void main()
{
    int myArray[100][100];
    int i, j, n;
    printf("Enter a value: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &myArray[i][j]);
        }
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ", myArray[i][j]);
        }
        printf("\n");
    }
}

