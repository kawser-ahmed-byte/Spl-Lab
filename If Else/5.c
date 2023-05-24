#include <stdio.h>
void main()
{
    char a;

    printf("Enter a character: ");
    scanf("%c", &a);
    if (a >= 'A' && a <= 'Z')
        printf("Upper Case letter");
    else
        printf("Not a uppercase");
}

