#include<stdio.h>
#include<string.h>
void main()
{
    char A[100];
    printf("Enter input: ");
    gets(A);
    puts(A);
    int i, c;
    c=strlen(A);

    printf("Length is : %d\n", c);
}

