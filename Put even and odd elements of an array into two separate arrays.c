#include <stdio.h>
int main() {
    int arr[100], even[100], odd[100], n, i, evenCount = 0, oddCount = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            even[evenCount++] = arr[i];
        } else {
            odd[oddCount++] = arr[i];
        }
    }
    printf("Even elements: ");
    for(i = 0; i < evenCount; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");
    printf("Odd elements: ");
    for(i = 0; i < oddCount; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");
    return 0;
}
