#include<stdio.h>
#include<string.h>
void main()
{
    char A[100], B[100];
    printf("Enter input: ");
    gets(A);
    gets(B);
    puts(A);
    puts(B);

    int c;
    c=strcmp(A,B);
    printf("%d\n", c);


}





