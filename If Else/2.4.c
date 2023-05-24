#include<stdio.h>
int main()
{
   int i,n,prime=1;
   scanf("%d",&n);
   /*6 ?  1|6
   2)6(3
     6
     _____
     0
   6/2=3
   n%i
   6%2=0 ; 6 is not prime
   6%3=0
   6%4=2
   6%5=1
   2 to 5
   2 to n-1*/
   for(i=2;i<=n-1;i++)
   {
       if(n%i==0)
       {
           prime=0;
           break;
       }
   }
   if(n==0 || n==1)
   {
       prime=0;
   }
   if(prime==0)
   {
       printf("This is not prime\n");
   }
   else
   {
       printf("This is prime\n");
   }
   return 0;
}

