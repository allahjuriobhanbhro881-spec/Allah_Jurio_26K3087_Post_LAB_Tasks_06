#include <stdio.h>

int main(){

    int prices[5], total_price = 0;

    for(int i=0;i<5;i++){
        printf("Enter price of product: %d: ", i+1);
        scanf("%d", &prices[i]);
        total_price = total_price +  prices[i];
    }
    
    int discount = 0;
    if(total_price > 10000){
      discount = (10*total_price)/100;
    }

    printf("\ntotal Price: %d", total_price);
    printf("\nDiscount: %d", discount);
    printf("\nFinal amount: %d", total_price - discount);
    return 0;
}