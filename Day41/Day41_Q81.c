// #100DaysofCode
// Q81 - Count characters in a string

#include <stdio.h>

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // read string with spaces

    int count = 0;
    while(str[count] != '\0' && str[count] != '\n') count++; // exclude newline

    printf("Output: %d\n", count);
    return 0;
}