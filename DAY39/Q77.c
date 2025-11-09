#include <stdio.h>

int main() {
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d",&n);
    int mat[n][n], diag[n], distinct=1;
    printf("Enter matrix elements:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&mat[i][j]);

    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(mat[i][i]==mat[j][j])
                distinct=0;

    if(distinct) printf("True\n");
    else printf("False\n");
    return 0;
}
