#include <stdio.h>
int main(){
    int Num1,Num2;

    printf("Enter a number");
    scanf("%d",&Num1);
    printf("Enter a number");
    scanf("%d",&Num2);

    if(Num1==Num2){
        printf("Match");
    }
    else{
        printf("Does not Match.Try again");
    }
}