#include<stdio.h>

void main() {
	char str[10];
	char str2[10];
	gets(str);
	gets(str2);

	int len = 0, len2 = 0;

	for(int i = 0; str[i] != '\0'; i++) {
		len++;
	}

	for(int i = 0; str2[i] != '\0'; i++) {
		len2++;
	}

	int isMatched = 0, result = 0, flag = 0;

	for(int i = 0; str[i] != '\0'; i++) {
		if(str2[0] == str[i]) {
			for(int j = 0; j < len2; j++) {
				if(str2[j] == str[i + j]) {
					isMatched++;
				}
			}
			if(isMatched == len2) {
				flag = 1;
				break;
			}
		}
	}

	if(flag) {
		printf("1\n");
	}
	else {
		printf("0\n");
	}


}
