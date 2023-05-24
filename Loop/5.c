#include <stdio.h>
int main()
{
    int  j, n, sum = 0;

    printf("Enter value number: ");
    scanf("%d", &n);
    for (j = 1; j < n; j++)
    {
        sum = sum + j;
        printf("%d ",j);
    }
    printf("\nThe Sum is : %d\n", sum);
}
