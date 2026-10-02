#include <stdio.h>
#include <stdbool.h>

int main(){
    
    int corr_pin = 1234, pin, count = 0, attempts = 3;
    bool check = false;
    for(int i=1;i<=3;i++){
       printf("\nEnter your pin: ");
       scanf("%d", &pin);
       count++;
       printf("\nRemaining Attempts: %d", (attempts - count));

       if(pin == corr_pin){
          printf("\nLoggin Successfull");
          check = true;
          break;
       }
    }
    
    if(check == false){
        printf("\nAccount Locked!");
    }
    return 0;
}