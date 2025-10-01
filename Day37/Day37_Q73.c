// #100DaysofCode
// Q73 - Find the sum of each row of a matrix

#include <stdio.h>
int main() {
    int r,c;
    printf("Enter rows and columns: ");
    scanf("%d%d",&r,&c);

    int a[r][c];
    printf("Enter matrix elements:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    printf("Row sums: ");
    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++) sum+=a[i][j];
        printf("%d ",sum);
    }
    return 0;
}