// #100DaysOfCode
// Q46. Write a program to print the following pattern:
// *****
// *****
// *****
// *****
// *****

#include <stdio.h>

int main() {
    int i, j;

    // Outer loop for rows
    for (i = 0; i < 5; i++) {
        // Inner loop for columns
        for (j = 0; j < 5; j++) {
            printf("*");
        }
        printf("\n"); // Move to next line after each row
    }

    return 0;
}
