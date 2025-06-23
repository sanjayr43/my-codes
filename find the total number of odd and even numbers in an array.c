#include <stdio.h>

int main() {
    int n, i, evenno = 0, oddno = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if(arr[i] % 2 == 0) {
            evenno++;
        } else {
            oddno++;
        }
    }
    printf("Total even numbers: %d\n", evenno);
    printf("Total odd numbers: %d\n", oddno);

    return 0;
}
