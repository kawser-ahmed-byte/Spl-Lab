#include<stdio.h>
int minimum (int x[])
{
    int i;
   int min = x[0];
    for(i=1; i<5; i++)
     {
         if(min>x[i])
            min = x[i];
     }
    return min;
}
int main()
{
    int num [] = {10, 20, 30, 40, 50};
    int minimumValue = minimum(num);
    printf("Minimum is: %d\n", minimumValue);
}

