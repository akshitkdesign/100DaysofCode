// #100DaysofCode
// Q50. Write a program to print the following pattern:
// *****
// ****
// ***
// **
// *

#include <stdio.h>

int main() {
    int i, j;

    // Outer loop controls rows
    for (i = 5; i >= 1; i--) {
        // Inner loop prints stars
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}