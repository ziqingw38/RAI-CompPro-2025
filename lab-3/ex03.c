#include <stdio.h>
int main(){
    int Num, Remainder;

    printf("Enter a number:");
    scanf("%d",&Num);

    Remainder= Num%2;

    switch(Num){
        case 1 ... 100:
         switch (Remainder){
            case 0:
              printf("%d is even\n", Num);
              break;
            case 1:
              printf("%d is odd\n", Num);
              break;}
        break;
        default:
        printf("%d is out of range\n",Num);
        }

}
