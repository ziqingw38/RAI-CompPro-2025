#include <stdio.h>
int main(){
    int i, NumSubs, Total;
    int Score[10]={0};
    char Sub[10][15]={' '};
    char Grade[10]={' '};
    float NumGrade[10]={0.0};
    float GPA;

    Total=0.0;
    printf("Enter number of subjects(max 10)");
    scanf("%d", &NumSubs);

    for (int i = 1; i <= NumSubs; i++){
        printf("Enter subject %d ",i);
        scanf("%s",(Sub[i]));

        printf("Enter %s Score ", Sub[i]);
        scanf("%d",&(Score[i]));

        if(Score[i]>=80){
            Grade[i]='A';
            NumGrade[i]=4.0;
            Total=Total+NumGrade[i];}
        else if(Score[i]>=70 && Score[i]<=80){
            Grade[i]='B';
            NumGrade[i]=3.0;
            Total=Total+NumGrade[i];}
        else if(Score[i]>=60 && Score[i]<=70){
            Grade[i]='C';
            NumGrade[i]=2.0;
            Total=Total+NumGrade[i];}
        else if(Score[i]>=50 && Score[i]<=60){
            Grade[i]='D';
            NumGrade[i]=1.0;
            Total=Total+NumGrade[i];}
        else if(Score[i]<50){
            Grade[i]='F';
            NumGrade[i]=0.0;
            Total=Total+NumGrade[i];}
    }
GPA= Total/NumSubs;
printf("Subject  Score   Grade   NumGrade \n");
printf("--------------------------------------\n");
for (i=1; i<=NumSubs; i++){
    printf("%s       %d       %c      %.1f \n", Sub[i], Score[i], Grade[i], NumGrade[i]);
    }

printf("GPA:%.1f", GPA);
}