#include <stdio.h>

// Insert Sort
void insert_sort(int array[], int size) {
    // Temporary Value
    int temporary = 0;

    // Traverse Array
    for(int i = 1; i < size; i++) {
        // Get Temporary Value
        temporary = array[i];
        
        // Compare Values To The Left
        for(int j = i - 1; j >= 0; j--) {
            // If Temporary Is Less Than Current Number Move Right Else Break
            if(temporary < array[j]) {
                array[j + 1] = array[j];
                array[j] = temporary;
            } else {
                break;
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

    // Sort The Array With Insert Sort
    insert_sort(array, size);

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