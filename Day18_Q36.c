// #100DaysofCode
// Q36. Write a program to find the HCF (GCD) of two numbers

#include <stdio.h>

int main() {
    int a, b, tempA, tempB, hcf;

    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    tempA = a;
    tempB = b;

    // Euclidean algorithm
    while (tempB != 0) {
        int remainder = tempA % tempB;
        tempA = tempB;
        tempB = remainder;
    }

    hcf = tempA;
    printf("HCF (GCD) of %d and %d is: %d\n", a, b, hcf);

    return 0;
}