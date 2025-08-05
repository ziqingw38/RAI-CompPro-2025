#include<stdio.h>
int main(){
    int NumArray[10];
    int Even, Odd, i, Num;
    Even=0;
    Odd=0;

    for(i=0; i<10; i++){
        printf("Enter Value %d ", i+1);
        scanf("%d", &Num);
        NumArray[i]= Num;
        if (Num%2==0){
            Even=Even+1;
        }
        else{
            Odd=Odd+1;
        }
    }
    printf("Even Numbers: %d \n", Even);
    printf("Odd numbers= %d\n ", Odd);
}