// #100DaysofCode
// Q84 - Convert lowercase string to uppercase

#include <stdio.h>

int main() {

    char str[1000];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(int i=0; str[i] != '\0' && str[i] != '\n'; i++){
        if(str[i]>='a' && str[i]<='z')
            str[i] = str[i] - 'a' + 'A';
    }

    printf("Output: %s\n", str);

    return 0;
}