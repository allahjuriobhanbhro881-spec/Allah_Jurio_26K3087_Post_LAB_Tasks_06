#include <stdio.h>

int main(){
    int marks=0,total_marks=0, counter=0, avg_marks = 0;
     
    while(marks>=0 && marks<100){
      printf("enter marks: ");
      scanf("%d", &marks);
      if(marks >= 0){
        total_marks = total_marks + marks;
         counter++;
      } 
    }

    avg_marks = (total_marks)/counter;

    printf("\nTotal marks: %d", total_marks);
    printf("\nNo. of students: %d", counter);
    printf("\nAverage marks: %d", avg_marks);

    return 0;
}