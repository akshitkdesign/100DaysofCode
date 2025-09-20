// #100DaysofCode
// Q9. Write a program to calculate simple and compound interest for given principal, rate, and time.

    #include <stdio.h>
    #include <math.h>  // for pow()

    int main() {
        float principal, rate, time, SI, CI;

        // Input
        printf("Enter Principal, Rate, and Time: ");
        scanf("%f %f %f", &principal, &rate, &time);

        // Simple Interest
        SI = (principal * rate * time) / 100;

        // Compound Interest
        CI = principal * (pow((1 + rate / 100), time)) - principal;

        // Output
        printf("Simple Interest=%.2f, Compound Interest=%.2f\n", SI, CI);

        return 0;
    }
