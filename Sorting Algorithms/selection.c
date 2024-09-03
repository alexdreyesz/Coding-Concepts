#include <stdio.h>

// Selection Sort
void selection_sort(int array[], int size) {
    int temporary = 0;
    int swap_index = 0;

    for(int i = 0; i < size - 1; i++) {
        // Reset Swap Index To Current Index
        swap_index = i;

        // Search For A New Minimum
        for(int j = i + 1; j < size; j++) {
            // New Minimum Found Update Swap Index
            if(array[swap_index] > array[j]) {
                swap_index = j;
            }
        }

        // Swap The Found Minimun Element With The Current Element
        temporary = array[i];
        array[i] = array[swap_index];
        array[swap_index] = temporary;
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

    // Sort The Array With Selection Sort
    selection_sort(array, size);

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