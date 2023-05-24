#include <stdio.h>
int main() {
    int i, n;
    float avg = 0, sum;
    printf("Enter the number");
    scanf("%d", &n);
    printf("Enter %d elements one by one\n\n", n);
    for(i = 0; i < n; i++) {
        scanf("%f", &sum);
        avg += sum;
    }
    avg /= n;
    printf("\nThe average of the entered input numbers is = %f", avg);
    return 0;
}
