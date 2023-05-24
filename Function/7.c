#include<stdio.h>
float pi=3.1416;
void test (int a)
{
    int c=5;
    printf("Value of Pi in test: %f\n", pi);
    c=c+a;
    pi=pi+2.5;
}
int main()
{
    int a=2, b=5;
    test(a);
    printf("Value of Pi in main: %f\n", pi);
    return 0;
}

