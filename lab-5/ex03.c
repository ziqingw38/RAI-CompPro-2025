#include<stdio.h>
int main(){
    int MarkArray[5];
    int i, Mark, Total, Highest;
    Total=0;
    Highest=0;

    for (i=0; i<5; i++){
        printf("Enter the mark of student %d ", i+1);
        scanf("%d", &Mark);
        MarkArray[i]=Mark;
        Total= Total+ Mark;
    }
    for (i=0; i<5; i++){
        if (MarkArray[i]>Highest){
            Highest= MarkArray[i];
        }
    }
    printf("Total Marks : %d \n", Total);
    printf("Highest Mark: %d \n",Highest);
}