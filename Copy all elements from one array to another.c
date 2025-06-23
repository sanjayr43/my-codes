#include <stdio.h>
int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int source[n], destination[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &source[i]);
    }
    for(i = 0; i < n; i++) {
        destination[i] = source[i];
    }
    printf("Elements copied to destination array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", destination[i]);
    }
    printf("\n");
    return 0;
}
