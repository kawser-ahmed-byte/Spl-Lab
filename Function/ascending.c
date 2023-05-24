#include<stdio.h>

void sorting(int arr[], int n) {
	for(int i = 0; i < n; i++) {
		int min = arr[i];
		int index = 0;
		int isSorted = 0;

		for(int j = i; j < n; j++) {
			if(min > arr[j]) {
				min = arr[j];
				index = j;
				isSorted = 1;
			}
		}


		if(isSorted) {
		int temp = arr[i];
		arr[i] = min;
		arr[index] = temp;
		}
	}
}

void main() {
	int arr[100];

	int n;
	printf("inputs number? :");
	scanf("%d ", &n);


	for(int i = 0; i < n; i++) {
		scanf("%d ", &arr);
	}
	sorting(arr, n);

	for(int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
}

