#include <stdio.h>
int main(){
    int Num;

    printf("Enter a number:");
    scanf("%d",&Num);

    if (Num<=100 && Num>=1){
        if(Num% 2==0){
            printf("%d is even", Num);
        }
        else{
            printf("%d is odd", Num);
        }
    }
    else{
        printf("%d is out of range",Num);
    }
}
