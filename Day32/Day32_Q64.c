// #100DaysofCode
// Q64. Find the digit that occurs the most times in an integer number.
// Show Sample Test Cases
// Input 1:
// 112233
// Output 1:
// 1
// Input 2:
// 887799
// Output 2:
// 7

#include <stdio.h>

int main() {
    long long num;
    int freq[10] = {0}; // to store frequency of digits 0–9

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    // If negative number, make it positive
    if (num < 0) {
        num = -num;
    }

    // Count frequencies of each digit
    while (num > 0) {
        int digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    // Find digit with maximum frequency
    int maxFreq = 0, resultDigit = 0;
    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            resultDigit = i;
        }
    }

    printf("Digit that occurs most: %d\n", resultDigit);

    return 0;
}