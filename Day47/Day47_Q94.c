// #100DaysofCode
// Q94. Find the longest word in a sentence

#include <stdio.h>
#include <string.h>

int main() {
    
    char sentence[200], word[50], longest[50] = "";
    int len = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (int i = 0; i <= strlen(sentence); i++) {
        if (sentence[i] == ' ' || sentence[i] == '\0' || sentence[i] == '\n') {
            word[len] = '\0';
            if (strlen(word) > strlen(longest))
                strcpy(longest, word);
            len = 0;
        } else {
            word[len++] = sentence[i];
        }
    }

    printf("Longest word: %s\n", longest);
    return 0;
}