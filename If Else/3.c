#include <stdio.h>
void main()
{
    int num;

    printf("Enter a number :");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("%d is EVEN\n", num);
    else
        printf("%d is ODD\n", num);
}
