#include <stdio.h>
int main() {
    int arr[100], n, i, pos, value;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to insert: ");
    scanf("%d", &value);

    printf("Enter the position to insert at (1 to %d): ", n+1);
    scanf("%d", &pos);
    if(pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
    } else {
        for(i = n; i >= pos; i--) {
            arr[i] = arr[i - 1];
        }
        arr[pos - 1] = value;
        n++;
        printf("Array after insertion:\n");
        for(i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}

