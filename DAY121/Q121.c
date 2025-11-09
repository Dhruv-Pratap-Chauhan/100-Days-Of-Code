#include <stdio.h>

int main() {
    char name[100];
    int age;
    FILE *fp = fopen("info.txt", "w");
    if(fp == NULL){
        printf("Error opening file!\n");
        return 1;
    }
    printf("Enter your name: ");
    scanf(" %[^\n]s", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    fprintf(fp, "Name: %s\nAge: %d\n", name, age);
    fclose(fp);
    printf("File created successfully! Data written to info.txt\n");
    return 0;
}
