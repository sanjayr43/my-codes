#include <stdio.h>
int main() {
    int i, product = 1;
    for(i = 1; i <= 5; i++) {
        product *= i;
    }
    printf("The product of numbers from 1 to 5 is: %d\n", product);
    return 0;
}
