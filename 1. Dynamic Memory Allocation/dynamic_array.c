#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main () {

   int *array = (int*)malloc(SIZE * sizeof(int));

   for(int i = 0; i < SIZE; i++) {
        array[i] = i + 1;
   }

   printf("\n");

   for(int i = 0; i < SIZE; i++) {
        printf("%d ", array[i]);
   }

   printf("\n\n");
    
    return 0;
}