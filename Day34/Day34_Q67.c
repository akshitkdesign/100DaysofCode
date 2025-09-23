// #100DaysofCode 
// Q67. Insert an element in an array at a given position.

#include <stdio.h>

int main() {
    int n, pos, elem, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[100];

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position and element to insert: ");
    scanf("%d %d", &pos, &elem);

    if(pos < 0 || pos > n) {
        printf("Invalid position!\n");
        return 0;
    }

    for(i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos] = elem;
    n++;

    printf("Array after insertion: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}