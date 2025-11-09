#include <stdio.h>

int main() {
    int n, i, j, flag=1;
    printf("Enter size of square matrix: ");
    scanf("%d",&n);
    int mat[n][n];
    printf("Enter elements:\n");
    for(i=0;i<n;i++) for(j=0;j<n;j++) scanf("%d",&mat[i][j]);
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            if(i==j) continue;
            if(mat[i][i]==mat[j][j]) flag=0;
        }
    }
    printf("%s\n", flag?"True":"False");
    return 0;
}
