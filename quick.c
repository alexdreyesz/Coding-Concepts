#include <stdio.h>

// Quick Sort 
void quick_sort(int array[], int size) {
    
}

int main() {
    int array[11] = {3,1,4,11,7,2,5,8,9,6,10};
    int size = 11;

    // Print Unsorted Array
    for(int i = 0; i < size; i++) {
        if(i != size - 1) {
            printf("%d, ", array[i]);
        } else {
            printf("%d", array[i]);
            printf("\n");
        }
    }

    // Sort The Array With Quick Sort
    quick_sort(array, size);

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