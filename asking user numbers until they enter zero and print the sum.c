#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter any numbers (enter 0 to stop):\n");

    while(1) {
        scanf("%d", &num);

        if(num == 0) {
            break;
        }

        if(num > 0) {
            sum += num;
        }
    }

    printf("Sum of all positive numbers entered: %d\n", sum);

    return 0;
}
