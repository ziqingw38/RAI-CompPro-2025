#include<stdio.h>
int main(){
    int Elements,i, Num, SearchNum, Times;
    Times=0;

    printf("Enter Number of Elements");
    scanf("%d", &Elements);

    int NumArray[Elements];

    for(i=0;i<Elements; i++){
        printf("Enter Number ");
        scanf("%d", &Num);
        NumArray[i]= Num;
    }
    printf("Enter number to search ");
    scanf("%d", &SearchNum);
    for(i=0;i<Elements; i++){
        if (NumArray[i]==SearchNum){
            Times=Times+1;
        }
    }
    printf("The Search Value %d occurs %d times", SearchNum, Times);


}
