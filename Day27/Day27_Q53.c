// #100DaysofCode
// Q53. Write a program to print the following star pattern:
//
// *
// ***
// *****
// *******
// *********
// *******
// *****
// ***
// *

#include <stdio.h>

int main() {
    int i, j;

    // Increasing part
    for (i = 1; i <= 9; i += 2) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Decreasing part
    for (i = 7; i >= 1; i -= 2) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}