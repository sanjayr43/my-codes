#include <stdio.h>
int main() {
    int arr[100], n, i, searchElement, found = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &searchElement);
    for(i = 0; i < n; i++) {
        if(arr[i] == searchElement) {
            printf("Element %d found at index %d.\n", searchElement, i);
            found = 1;
            break;
        }
    }
    if(!found) {
        printf("Element %d not found in the array.\n", searchElement);
    }

    return 0;
}
