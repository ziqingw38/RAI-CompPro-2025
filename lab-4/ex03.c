#include <stdio.h>
int main(){
    int Num,i, Div;

    do{
        printf("Enter a number: ");
        scanf("%d", &Num);
        if (Num==0){
            printf ("Exiting the program...Bye\n");
        }
        else{
            Div= Num%2;
            if(Div==1){
                printf("odd \n");}
            else{
                printf("Even\n"); }
        }
    }
    while (Num != 0);
}