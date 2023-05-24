#include<stdio.h>
int add (int a, int b)
{
    int c;
    c=a+b;
    return c;
}
int main()
{
    int a=2, b=3;
    int result;
    result = add(a,b);
    printf("Result is: %d\n", result);
    return 0;
}
