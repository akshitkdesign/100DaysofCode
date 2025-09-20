// #100DaysofCode
// Q27. Write a program to print the sum of the first n odd numbers.

#include <stdio.h>

int main() {
    int n, sum = 0, odd = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += odd;   // add the current odd number
        odd += 2;     // next odd number
    }

    printf("%d\n", sum);

    return 0;
}