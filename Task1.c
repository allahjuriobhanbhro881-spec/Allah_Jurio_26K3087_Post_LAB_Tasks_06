#include <stdio.h>

int main(){

    int withdrawls, remaining_b = 0;
    int initial_b = 50000, w_counter = -1;

    do{
        printf("Enter withdrawl transactions: ");
        scanf("%d", &withdrawls);
        initial_b = initial_b - withdrawls;
        remaining_b = initial_b;
        w_counter++;
    }
    while(withdrawls > 0);
    
    printf("\nRemaining balance: %d", remaining_b);
    printf("\nNo. of withdrawls: %d", w_counter);


    return 0;
}