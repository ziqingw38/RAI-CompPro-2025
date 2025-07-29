#include <stdio.h>
int main(){
    int Num,i, Result;

    printf("Enter a number ");
    scanf("%d", &Num);
    printf("Multiplication table for %d\n", Num);

    for(i=1; i<=12; i++){
        Result= Num*i;
        printf("%d*%d= %d \n", Num, i, Result);
    }

}