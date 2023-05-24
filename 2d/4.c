#include<stdio.h>
void main(){

        printf("\nInput n:");
        int n;
        scanf("%d", &n);

        int arr[n][n];
        int  arr_2[n];
        int  arr_3[n];

        for (int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++){
                printf("Enter the value of index(%d:%d) =", i, j);
                scanf("%d", &arr[i][j]);              //Scanning the (nxn) matrix
            }
        }

        for (int x=0; x<n; x++)
        {
            for(int y=0; y<n; y++)
            {
                if(x==y) arr_2[x]=arr[x][y];          //Condition for major diagonal
                if(x+y==(n+1)-2) arr_3[x]=arr[x][y];  //Condition for minor diagonal
            }
        }

        printf("\nMajor Diagonal:");          //Printing major diagonal
        for (int a=0; a<n; a++)
            printf("\t%d", arr_2[a]);

        printf("\nMinor Diagonal:");        //Printing minor diagonal
        for (int b=0; b<n; b++)
            printf("\t%d", arr_3[b]);

    }
