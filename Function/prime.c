#include<stdio.h>

void findPrime(int num);
void main(){
    findPrime(10);


}
void findPrime(int num) {
    printf("Prime less than %d: ", num);
    int isPrime = 1;
    for(int i = 1; i < num; i++)
    {
        if(i == 2)
        {
                printf("%d, ", i);
                continue;
        }
        if(i == 3)
        {
                printf("%d, ", i);
                continue;
        }
        else
        {
                for(int j = 1; j < i; j++)
                {
                    if( i % j == 0)
                    {
                        isPrime = 0;
                        break;
                    }
                }
                if(isPrime) printf("%d, ", i);
                isPrime = 1;

        }
    }

}
