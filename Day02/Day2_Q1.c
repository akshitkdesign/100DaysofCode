// #100DaysofCode
// Q3. Write a program to calculate the area and perimeter of a rectangle given its length and breadth.


        #include <stdio.h>

        int main() {
            int length, breadth;

            // Taking input
            printf("Enter length of rectangle: ");
            scanf("%d", &length);
            printf("Enter breadth of rectangle: ");
            scanf("%d", &breadth);

            // Calculations
            int area = length * breadth;
            int perimeter = 2 * (length + breadth);

            // Output
            printf("Area=%d, Perimeter=%d\n", area, perimeter);

            return 0;
        }
