// #100DaysofCode
// Q96. Reverse each word in a sentence without changing the word order

#include <stdio.h>
#include <string.h>

void reverse(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

int main() {
    char sentence[200];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = '\0'; // remove newline

    char *word_start = sentence;
    for (int i = 0; ; i++) {
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            reverse(word_start, &sentence[i - 1]);
            if (sentence[i] == '\0')
                break;
            word_start = &sentence[i + 1];
        }
    }

    printf("Reversed sentence: %s\n", sentence);
    return 0;
}