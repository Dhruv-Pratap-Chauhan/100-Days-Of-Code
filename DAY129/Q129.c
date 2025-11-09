#include <stdio.h>

int main() {
    int num, sum=0, count=0;
    FILE *fp=fopen("numbers.txt","r");
    if(fp==NULL){ printf("Error opening file!\n"); return 1; }
    while(fscanf(fp,"%d",&num)==1){
        sum+=num;
        count++;
    }
    fclose(fp);
    double avg=(count>0)?((double)sum/count):0;
    printf("Sum = %d\nAverage = %.2f\n", sum, avg);
    return 0;
}
