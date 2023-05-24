#include<stdio.h>
void main()
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d%d", &a,&b);

    if(a > b)
    {
        printf("%d is Max,\n%d is min", a, b);
    }
    else
    {
       printf("%d is Max,\n%d is Min", b, a);

    }
}
