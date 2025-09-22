// #100DaysofCode
// Q66. Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() {
    
    int n, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n + 1]; // +1 to accommodate the new element
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &key);

    int i;
    // Find the correct position from the end
    for (i = n - 1; (i >= 0 && arr[i] > key); i--) {
        arr[i + 1] = arr[i]; // shift elements
    }
    arr[i + 1] = key; // insert key

    printf("Array after insertion: ");
    for (int j = 0; j <= n; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");

    return 0;
}