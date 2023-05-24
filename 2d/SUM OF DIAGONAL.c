#include<stdio.h>
void main()
{
    int A[3][3];
    int i, j, n, s1=0, s2=0;
    printf("Enter matrix");
    for(i=0; i<3; i++){
        for(j=0; j < 3; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
     for(i=0; i<3; i++)
     {
         for(j=0; j < 3; j++)
         {
             if(i==j){
                s1 = s1+A[i][j];}
             if(i+j==2){
                s2=s2+A[i][j];}
         }
         printf("\nMajor =%d, Minor =%d", s1,s2);

     }

}
