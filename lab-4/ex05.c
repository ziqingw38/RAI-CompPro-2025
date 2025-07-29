#include <stdio.h>
int main(){
    int Num,i, Result;

    printf("Enter a number ");
    scanf("%d", &Num);

    Result=Num;
    for(i=1; i<Num; i++){
        Result= Result*(Num-i);
    }
       printf("Factorial of %d is %d \n", Num, Result);
}