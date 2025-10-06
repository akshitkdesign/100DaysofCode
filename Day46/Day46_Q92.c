// #100DaysofCode
// Q92. Find the first repeating lowercase alphabet in a string

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int freq[26] = {0};
    char repeat = '\0';

    printf("Enter a string (lowercase letters): ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
            if (freq[ch - 'a'] == 2) {
                repeat = ch;
                break;
            }
        }
    }

    if (repeat)
        printf("First repeating character: %c\n", repeat);
    else
        printf("No repeating lowercase alphabet found.\n");

    return 0;
}