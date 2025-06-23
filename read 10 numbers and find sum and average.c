#include <stdio.h>
int main() {
    int i, num;
    int sum = 0;
    float average;
    printf("Enter 10 numbers:\n");
    for(i = 1; i <= 10; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        sum += num;
    }
    average = sum / 10.0;
    printf("\nSum = %d\n", sum);
    printf("Average = %.2f\n", average);
    return 0;
}
