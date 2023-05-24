#include <stdio.h>
void main()
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num >= 0)
        printf("%d is positive\n", num);
    else
        printf("%d is negative", num);
}
