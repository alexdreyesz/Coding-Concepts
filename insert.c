#include <stdio.h>

void insert_sort(int array[], int size) {

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