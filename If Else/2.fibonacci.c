#include<stdio.h>
void main()
{
    int num1 = 0, num2 = 1, n = 10, i, temp;
    printf("%d ", num1);
    printf("%d ", num2);
    for(i = 1; i<n-1; i++)
    {
        temp = num1;
        num1 = num2;
        num2 = temp + num2;
        printf("%d ", num2);
    }
}
