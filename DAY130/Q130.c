#include <stdio.h>

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d",&n);
    char name[50];
    int roll, marks;
    FILE *fp=fopen("students.txt","w");
    for(int i=0;i<n;i++){
        printf("Enter name, roll number, marks for student %d: ", i+1);
        scanf(" %[^,], %d, %d", name, &roll, &marks);
        fprintf(fp,"%s %d %d\n", name, roll, marks);
    }
    fclose(fp);

    fp=fopen("students.txt","r");
    printf("Student records:\n");
    for(int i=0;i<n;i++){
        fscanf(fp,"%s %d %d", name, &roll, &marks);
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }
    fclose(fp);
    return 0;
}
