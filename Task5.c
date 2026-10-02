#include <stdio.h>

int main(){
      
    int price, total_bill = 0, choice;

    do{
      printf("Enter price of item: ");
      scanf("%d", &price);
      total_bill = total_bill + price;
      printf("Do you want to add another item: 1 for yes, 0 for no: ");
      scanf("%d", &choice); 

    }while(choice == 1);

     int discount = 0, final_bill;
    if(total_bill > 5000){
      discount = (5*total_bill)/100;
    }

    final_bill = total_bill - discount;

    printf("\nTotal Price: %d", total_bill);
    printf("\ndiscount: %d", discount);
    printf("\nFinal Bill: %d", final_bill);
    
    return 0;
}