#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    int a=5,b=2;
    switch(ch)
    {
        case '+':
            printf("%d\n",a+b);
            break;
        case '-':
            printf("%d\n",a-b);
            break;
        case '*':
            printf("%d\n",a*b);
            break;
        case '/':
            printf("%d\n",a/b);
            break;
        default:
            printf("Wrong input...\n");
    }
}
