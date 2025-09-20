// #100DaysofCode
// Q26. Write a program to print numbers from 1 to n.

#include <stdio.h>

int main() {
    int n;

    // Show input instruction
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("%d", i);
        if (i < n) {
            printf(" ");  // print space after number except for last one
        }
    }

    printf("\n"); // move cursor to next line after printing

    return 0;
}