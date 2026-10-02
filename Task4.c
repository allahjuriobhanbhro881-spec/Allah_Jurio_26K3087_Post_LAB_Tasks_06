#include <stdio.h>

int main(){
      
    int price, total = 0, choice;

    do{
      printf("Enter price of item: ");
      scanf("%d", &price);
      total = total + price;
      printf("Do you want to add another item: 1 for yes, 0 for no: ");
      scanf("%d", &choice); 

    }while(choice == 1);

     int discount = 0, final_amount;
    if(total > 10000){
      discount = (10*total)/100;
    }

    final_amount = total - discount;

    printf("\nTotal Price: %d", total);
    printf("\ndiscount: %d", discount);
    printf("\nFinal amount: %d", final_amount);
    
    return 0;
}