#include <stdio.h>

int main() {
    int r, c, i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d",&r,&c);
    int mat[r][c];
    printf("Enter elements:\n");
    for(i=0;i<r;i++) for(j=0;j<c;j++) scanf("%d",&mat[i][j]);
    printf("Transpose:\n");
    for(j=0;j<c;j++){
        for(i=0;i<r;i++) printf("%d ", mat[i][j]);
        printf("\n");
    }
    return 0;
}
