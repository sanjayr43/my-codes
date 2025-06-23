#include <stdio.h>

int main() {
    int i, a = 0, b = 1, c;

    printf("First 10 numbers of Fibonacci sequence:\n");

    printf("%d ", a);
    printf("%d ", b);

    for(i = 3; i <= 10; i++) {
        c = a + b;
        printf("%d ", c);

        a = b;
        b = c;
    }

    printf("\n");

    return 0;
}
