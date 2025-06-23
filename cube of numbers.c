#include <stdio.h>
int main() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Cubes of numbers from 1 to %d:\n", n);
    for(i = 1; i <= n; i++) {
        printf("Cube of %d = %d\n", i, i * i * i);
    }

    return 0;
}
