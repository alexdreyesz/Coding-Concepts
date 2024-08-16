#include <stdio.h>
#include <stdlib.h>

#define ROWS 6
#define COLUMNS 4

int main () {

   int **array = (int**)malloc(ROWS * sizeof(int*));

   for(int i = 0; i < ROWS; i++) {
        array[i] = (int*)malloc(COLUMNS * sizeof(int));
   }

   for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLUMNS; j++) {
            array[i][j] = (i + j) + 1;
        }
   }

   printf("\n");

   for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLUMNS; j++) {
            printf("%d ", array[i][j]);
        }

        printf("\n");
   }

   printf("\n\n");
    
    return 0;
}