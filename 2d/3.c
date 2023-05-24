#include<stdio.h>
void main()
{
    int A[100][100];
    int i, j, n, det=0;
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
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
     for(i=0;i<n;i++)
      det = det + (A[0][i]*(A[1][(i+1)%3]*A[2][(i+2)%3] - A[1][(i+2)%3]*A[2][(i+1)%3]));

  printf("Determinant is: %d",det);
}


