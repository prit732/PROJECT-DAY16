#include <stdio.h>

int main(){
   
   printf("enter the pattern:\n");
   for (int row = 1; row <= 3; row++) {
      for (int col = 1; col <= 5; col++) {
         if ((row == 2 || row == 2) && (col == 2 || col == 4)){
            printf(" ");
         } else {
            printf("*");
         }
      }
      printf("\n");
   }
   printf("*\n");
  
  
} 