// #100DaysofCode
// Q37. Write a program to find the LCM of two numbers

#include <stdio.h>

int main() {
    int a, b, max, lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    // Start checking from the greater of the two numbers
    max = (a > b) ? a : b;
    lcm = max;

    // Find the LCM
    while (1) {
        if (lcm % a == 0 && lcm % b == 0) {
            break;
        }
        lcm++;
    }

    printf("LCM of %d and %d is: %d\n", a, b, lcm);

    return 0;
}