#include<stdio.h>
int main(){
    int Array[10];
    int Num,i;

    for (i=0; i<10;i++){
        printf("Enter the value %d here", i+1);
        scanf("%d", &Num);
        Array[i]=Num;
        printf("\n");
    }
    printf("Values in array are: ");
    for (i=0; i<10;i++){
        printf("%d, ", Array[i]);
    }
}
