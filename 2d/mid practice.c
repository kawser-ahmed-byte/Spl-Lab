#include<stdio.h>
void main()
{
    int A[100][100], B[100][100], C[100][100];
    int i, j, n;
    printf("Enter a value: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    printf("Matrix A: \n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
     printf("Matrix B: \n");
     for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
     printf("Matrix C: \n");
     for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

}


