#include <stdio.h>

int main(){

    int rech_amount,total_b=0, attempts = 0;

    do{
        printf("Enter recharge amount: ");
        scanf("%d", &rech_amount);
        total_b = total_b + rech_amount;
        if(total_b > 5000){
         printf("Recharge limit reached ");
         total_b = total_b - rech_amount;
         break;
        }
        else{
            if(rech_amount > 0){
             attempts++;
             }
        }
    }while(rech_amount > 0);
   
    printf("\nTotal Recharged amount: %d", total_b);
    printf("\nNo. of attempts: %d", attempts);
    return 0;
}