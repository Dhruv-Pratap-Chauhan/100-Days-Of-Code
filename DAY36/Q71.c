#include <stdio.h>

int main() {
    int r, c;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    int mat[r][c];
    printf("Enter matrix elements:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&mat[i][j]);

    printf("Matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
    return 0;
}
