#include <stdio.h>
int main(){
    int Height, Radius;
    float Volume;

    printf("Enter cone Height ");
    scanf("%d",&Height);
    printf("Enter cone Radius ");
    scanf("%d",&Radius);

    Volume=(3.14*Radius*Radius*Height)/3;

    printf("Cone volume:%.1f\n", Volume);

    if (Volume>260){
        printf("this cone is perfect for Supun project\n");
    }
    else{
        printf("this cone is not fit for this project\n");
    }
}