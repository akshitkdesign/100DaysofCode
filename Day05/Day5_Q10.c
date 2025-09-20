// #100DaysofCode
// Q10. Write a program to input time in seconds and convert it to hours:minutes:seconds format.

    #include <stdio.h>

    int main() {
        int seconds, hours, minutes, secs;

        // Input
        printf("Enter time in seconds: ");
        scanf("%d", &seconds);

        // Conversion
        hours = seconds / 3600;
        minutes = (seconds % 3600) / 60;
        secs = seconds % 60;

        // Output
        printf("%d:%d:%d\n", hours, minutes, secs);

        return 0;
    }
