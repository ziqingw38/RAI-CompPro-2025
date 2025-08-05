#include<stdio.h>
int main(){
    int NumArray[8];
    int i, Lowest, Highest, Num;
    Highest=0;
    Lowest=999;

    for (i=0; i<8; i++){
        printf("Enter number %d ", i+1);
        scanf("%d", &Num);
        NumArray[i]=Num;
    }
    for (i=0; i<8; i++){
        if (NumArray[i]>Highest){
            Highest= NumArray[i];
        }
        if (NumArray[i]<Lowest){
            Lowest= NumArray[i];
        }    
    }
    printf("Lowest Number : %d \n", Lowest);
    printf("Highest number: %d \n",Highest);
}