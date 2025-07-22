#include <stdio.h>
int main(){
    char Name[15],Grade;
    int Calculus, Phy, ComPro;
    float Avg;

    printf("Enter your name ");
    scanf("%s",Name);
    printf("Enter your Calculus Score ");
    scanf(" %d",&Calculus);
    printf("Enter your Physics Score ");
    scanf("%d",&Phy);
    printf("Enter your Computer Programming Score ");
    scanf("%d",&ComPro);

    Avg=(Calculus+Phy+ComPro)/3;
    if (Avg>=80){
        Grade='A';
    }
    else if(Avg<80 && Avg>=70){
        Grade='B';
    }
    else if(Avg<70 && Avg>=60){
        Grade='C';
    }
    else if(Avg<60 && Avg>=50){
        Grade='D';
    }
    else if(Avg<50){
        Grade='F';
    }
    printf("%s, your average is %.2f. You got Grade %c", Name, Avg,Grade);
}