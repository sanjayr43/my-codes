#include <stdio.h>
int main() {
    int i, sum = 0;
    for(i = 1; i <= 10; i++) {
        sum += i;
    }
    printf("The sum of the first 10 natural numbers is: %d\n", sum);
    return 0;
}
