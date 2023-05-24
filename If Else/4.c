#include<stdio.h>

int main()
{
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    if(a > b && a > c)
    {
        printf("a is Maximum\n");
    }
    else if(b>a && b>c)
	{
		printf("b is Maximum\n");
	}
	else
	{
		printf("c is maximum\n");
	}
	if(a < b && a < c)
    {
        printf("a is Min");
    }
    else if(b<a && b<c)
	{
		printf("b is Min");
	}
	else
	{
		printf("c is Min");
	}
	return 0;
}

