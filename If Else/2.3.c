#include<stdio.h>
int main()
{
    int i=1, n=10, sum=0;
    do{
      sum=sum+i;
      i++;
     }
  while(i<=n);
  printf("\n%d ", sum);

}
