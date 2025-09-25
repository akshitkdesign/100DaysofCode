// Q70. Rotate an array to the right by k positions.
// #100DaysofCode

#include <stdio.h>

int main() {
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k (number of rotations): ");
    scanf("%d", &k);

    k = k % n; // in case k > n

    printf("Array after rotation: ");
    for (int i = n - k; i < n; i++) {
        printf("%d ", arr[i]);
    }
    for (int i = 0; i < n - k; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}