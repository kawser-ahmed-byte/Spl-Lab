#include<stdio.h>

void main() {
    int arrA[100], arrB[100];

    int n, m;
    printf("Enter how many numbers you want to give in Array A: ");
    scanf("%d", &n);

    printf("Enter how many numbers you want to give in Array B: ");
    scanf("%d", &m);

    printf("Enter numbers for array A: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arrA[i]);
    }

    printf("\nEnter numbers for array B: ");
    for(int i = 0; i < m; i++) {
        scanf("%d", &arrB[i]);
    }

    int tempArr[100];
    for(int i = 0; i < n; i++) {
        tempArr[i] = arrA[i];
    }

    for(int i = 0; i < m; i++) {
        arrA[i] = arrB[i];
    }

    for(int i = 0; i < n; i++) {
        arrB[i] = tempArr[i];
    }

    printf("All elements into array A after swap: ");
    for(int i = 0; i < m; i++) {
        printf("%d ", arrA[i]);
    }
    printf("\n");

    printf("All elements into array B after swap: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arrB[i]);
    }
    printf("\n");

}
