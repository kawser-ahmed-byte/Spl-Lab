#include<stdio.h>
void main() {
    char arr[100];
    int numOfAlphabets;
    printf("Enter the number of characters: ");
    scanf("%d", &numOfAlphabets);
    for(int i = 0; i < numOfAlphabets; i++) {
        scanf(" %c", &arr[i]);
    }
    int vowelCount = 0;
    for(int i = 0; i < numOfAlphabets; i++) {
        if(arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U' || arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u') {
            vowelCount++;
        }
    }
    printf("Number of Vowel: %d\n" , vowelCount);
}
