#include <stdio.h>

// Bubble Sort
void bubble_sort(int array[], int size) {
    // Temporary Value
    int temporary = 0;

    // Traverse Array
    for(int i = 0; i < size; i++) {
        // Compare Adjecent Values 
        for(int j = 1; j < size; j++) {
            // If Current Value Is Greather Than Previous Value Swap
            if(array[j - 1] > array[j]) {
                temporary = array[j - 1];
                array[j - 1] = array[j];
                array[j] = temporary;
            }
        }
    }
}

int main() {

    int array[10] = {3,1,4,7,2,5,8,9,6,10};
    int size = 10;

    // Print Unsorted Array
    for(int i = 0; i < size; i++) {
        if(i != size - 1) {
            printf("%d, ", array[i]);
        } else {
            printf("%d", array[i]);
            printf("\n");
        }
    }

    // Sort The Array With Bubble Sort
    bubble_sort(array, size);

    // Print Sorted Array
    for(int i = 0; i < size; i++) {
        if( i != size - 1) {
            printf("%d, ", array[i]);
        } else {
            printf("%d", array[i]);
            printf("\n");
        }
    }

    return 0;
}