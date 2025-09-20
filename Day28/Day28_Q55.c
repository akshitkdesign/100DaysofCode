// #100DaysofCode
// Q55. Write a program to print all the prime numbers from 1 to n.
//
// Sample Test Cases:
// Input 1:
// 10
// Output 1:
// 2 3 5 7

#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    for (i = 2; i <= n; i++) {
        isPrime = 1; // assume prime
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0; // not prime
                break;
            }
        }
        if (isPrime) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}