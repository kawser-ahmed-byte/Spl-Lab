#include<stdio.h>
int main()
{
    int n = 6, fact = 1;
    while(n>=1)
    {
        fact = fact*n;
        n--;
    }
    printf("Factorial is %d\n",fact);
}
