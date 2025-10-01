// #100DaysofCode
// Q76 - Check if a matrix is symmetric

#include <stdio.h>

int main() {
    int n, m, isSym = 1;

    printf("Enter the size of the square matrix (rows columns): ");
    scanf("%d %d", &n, &m);

    if(n != m) {
        printf("Output: False (matrix is not square)\n");
        return 0;
    }

    int a[n][n];

    printf("Enter the matrix elements row by row (space-separated):\n");
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(a[i][j] != a[j][i]) { isSym = 0; break; }

    printf("Output: %s\n", isSym ? "True" : "False");

    return 0;
}