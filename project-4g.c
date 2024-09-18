#include <stdio.h>

int main() {
   
    for (int row = 1; row <= 5; row++){
        
        for (int col = row; col < 5; col++){
            printf("  ");
        }


        for (int k = row; k >= 1; k--){
            printf("%d ", k);
        }

        
        for (int k = 2; k <= row; k++){
            printf("%d ", k);
        }

    
        printf("\n");
    }

}
