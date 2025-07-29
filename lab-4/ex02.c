#include <stdio.h>
int main(){
    int Sum, Num,i;
    Sum=0;
    i=1;

    while(i<=10){
        printf("%d.", i);
        printf("Enter a number: ");
        scanf("%d", &Num);
        Sum=Sum+Num;
        i++;
    }
    printf("The total sum is: %d \n", Sum);
}