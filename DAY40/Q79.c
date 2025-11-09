#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter size of square matrix: ");
    scanf("%d",&n);
    int mat[n][n];
    printf("Enter elements:\n");
    for(i=0;i<n;i++) for(j=0;j<n;j++) scanf("%d",&mat[i][j]);
    printf("Diagonal traversal: ");
    for(i=0;i<n;i++) for(j=0;j<n;j++){
        int k=i+j;
        for(int x=0;x<n;x++) for(int y=0;y<n;y++)
            if(x+y==k) printf("%d ", mat[x][y]);
    }
    printf("\n");
    return 0;
}
