#include<stdio.h>
float avg (int a, int b, int c)
{
    return (a+b+c)/3.0;
}
int main()
{
    int a=2, b=3, c=6;
    float res;
    res=avg(a,b,c);
    printf("Result is: %f\n", res);
    return 0;
}

