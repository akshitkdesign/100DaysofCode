// #100DaysofCode
// Q93. Check if two strings are anagrams of each other

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    
    char str1[100], str2[100];
    int freq1[26] = {0}, freq2[26] = {0};

    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    for (int i = 0; str1[i]; i++)
        if (isalpha(str1[i]))
            freq1[tolower(str1[i]) - 'a']++;

    for (int i = 0; str2[i]; i++)
        if (isalpha(str2[i]))
            freq2[tolower(str2[i]) - 'a']++;

    int anagram = 1;
    for (int i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            anagram = 0;
            break;
        }
    }

    if (anagram)
        printf("Anagrams\n");
    else
        printf("Not anagrams\n");

    return 0;
}