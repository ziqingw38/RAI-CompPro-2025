#include <stdio.h>
int main(){
    float Balance;
    int Option,Temp;
    Balance= 0.00;
    
    do{
        printf("=====ATM Menu=====\n");
        printf("1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n4. Exit\n");
        printf("Choose an option");
        scanf("%d", &Option);

        if(Option==4){
            printf("Thank you for using the ATM.");
        }
        else{
            switch(Option){
                case 1:
                  printf("Current Balance: %.2f \n", Balance);
                  break;
                case 2:
                  printf("Enter amount to deposit: ");
                  scanf(" %d", &Temp);
                  printf("\n");
                  Balance= Balance+Temp;
                  break;
               case 3:
                  printf("Enter amount to withdraw: ");
                  scanf("%d", &Temp);
                  printf("\n");
                  Balance=Balance-Temp;
                  break;
                }
            }
    }
    while(Option!=4);
}