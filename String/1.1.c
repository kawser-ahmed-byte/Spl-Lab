#include<stdio.h>
void main()
{
    char A[100];
    printf("Enter input: ");
    gets(A);
    puts(A);
    int i, c=0;
    for(i = 0; A[i]!='\0'; i++)
    {
        c++;
    }
    printf("Length is : %d\n", c);
}
