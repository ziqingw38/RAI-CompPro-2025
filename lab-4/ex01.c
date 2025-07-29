#include <stdio.h>
int main(){
    int Sum, Num,i;
    float Avg;
    Sum=0;

    for (i=1; i<=10; i++){
        printf("%d.", i);
        printf("Enter the number: ");
        scanf("%d", &Num);
        Sum=Sum+Num;
    }
    printf("The total sum is: %d \n", Sum);
    Avg= Sum/10.0;
    printf("The average is: %.2f\n", Avg);
}