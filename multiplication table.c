#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a number for multiplication table: ");
    scanf("%d", &num);

    printf("Multiplication table of %d:\n", num);
    for(i = 1; i <= 10; i++) {
        printf("%d � %d = %d\n", num, i, num * i);
    }
    return 0;
}
