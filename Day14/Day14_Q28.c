// #100DaysofCode
// Q28. Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>

int main() {
    int n, product = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf(""); // prepare for expression printing

    // Loop through even numbers
    for (int i = 2; i <= n; i += 2) {
        product *= i;
    }

    // Print result
    printf("%d (", product);

    // Print expression part
    for (int i = 2; i <= n; i += 2) {
        printf("%d", i);
        if (i + 2 <= n) {
            printf(" * ");
        }
    }

    printf(")\n");

    return 0;
}
