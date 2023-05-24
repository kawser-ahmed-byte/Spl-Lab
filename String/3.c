#include<stdio.h>
#include<string.h>
void main()
{
    char A[100], B[100];
    printf("Enter input: ");
    gets(A);
    gets(B);
    puts(A);

    strcpy(B,A);
    puts(B);


}


