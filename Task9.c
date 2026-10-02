#include <stdio.h>

int main(){

    int units[5], total_units = 0;
    for(int i=0;i<5;i++){
        printf("Enter units of Household: %d: ", i+1);
        scanf("%d", &units[i]);
        total_units = total_units + units[i];
    }

    int highest = units[0];
    int lowest = units[0];
    for(int i=0;i<5;i++){
       if(units[i] > highest){
         highest = units[i];
       }
       if(units[i] < lowest){
         lowest = units[i];
       }
    }

    int bill = total_units*10, surcharge = 0;
    if(total_units > 500){
        surcharge = (5*bill)/100;
    }

    int total_amount = bill -  surcharge;
    printf("\nTotal units consumed: %d", total_units);
    printf("\ntotal amount: %d", total_amount);

    return 0;
}