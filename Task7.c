#include <stdio.h>

int main(){
      
    int marks[5], total=0;
    for(int i=0;i<5;i++){
       printf("Enter marks: ");
       scanf("%d", &marks[i]);  
    }

    int highest = marks[0], lowest = marks[0];
    for(int i=0;i<5;i++){
       total = total + marks[i];
       if(marks[i] > highest){
        highest = marks[i];
       } 
       if(marks[i] < lowest){
        lowest = marks[i];
       }
    }

    int average = total/5;
    printf("\nTotal Marks: %d", total);
    printf("\nAverage Marks: %d", average);
    printf("\nhighest Marks: %d", highest);
    printf("\nlowest Marks: %d", lowest); 

    return 0;
}