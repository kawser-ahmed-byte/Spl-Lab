#include<stdio.h>
void main()
{
    int A[5][5];
    int i, j, m, n;
    printf("Enter value: ");
    scanf("%d", &m);
    scanf("%d", &n);
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Matrix A in Row Wise: \n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ", A[i][j]);
        }
    }
        printf("\nMatrix A in Row Wise: \n");
        for(j = 0; j < n; j++)
    {
        for(i = 0; i < m; i++)
        {
            printf("%d ", A[i][j]);
        }
    }

}


