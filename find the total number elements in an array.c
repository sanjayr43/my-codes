#include <stdio.h>
int main() {
    int n, i, negativeCount = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] < 0) {
            negativeCount++;
        }
    }
    printf("Total number of negative elements: %d\n", negativeCount);
    return 0;
}
