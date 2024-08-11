#include <stdio.h>

// Function Declaration
void merge_sort(int array[], int left, int right);
void merge(int arr[], int left, int mid, int right);

// Merge Sort
void merge_sort(int array[], int left, int right) {   
    if(left < right) {
        // Find The Middle Point
        int mid = left + (right - left) / 2;

        // Sort First And Second Halves
        merge_sort(array, left, mid);
        merge_sort(array, mid + 1, right);

        // Merge The Sorted Halves
        merge(array, left, mid, right);
    }
}

// Function To Merge Two Halves Of An Array
void merge(int array[], int left, int mid, int right) {
    int i, j, k;
    int left_index = mid - left + 1;
    int right_index = right - mid;

    // Temporary Arrays To Hold The Two Halves
    int left_array[left_index];
    int right_array[right_index];

    // Copy Data To Temporary Arrays left_array[] and right_array[]
    for (i = 0; i < left_index; i++) {
        left_array[i] = array[left + i];
    }
        
    for (j = 0; j < right_index; j++)
        right_array[j] = array[mid + 1 + j];

    // Initial Indexes Of First And Second Subarrays
    i = 0;
    j = 0;
    k = left; // Initial Index Of Merged Subarray

    // Merge The Temporary Arrays Back Into Array[]
    while (i < left_index && j < right_index) {
        if (left_array[i] <= right_array[j]) {
            array[k] = left_array[i];
            i++;
        } else {
            array[k] = right_array[j];
            j++;
        }
        k++;
    }

    // Copy The Remaining Elements Of left_array[] If Any
    while (i < left_index) {
        array[k] = left_array[i];
        i++;
        k++;
    }

    // Copy The Remaining Elements Of right_index[] If Any
    while (j < right_index) {
        array[k] = right_array[j];
        j++;
        k++;
    }
}

int main() {
    int array[11] = {3,1,4,11,7,2,5,8,9,6,10};
    int size = 11;
    
    int left = 0;
    int right = size - 1;

    // Print Unsorted Array
    for(int i = 0; i < size; i++) {
        if(i != size - 1) {
            printf("%d, ", array[i]);
        } else {
            printf("%d", array[i]);
            printf("\n");
        }
    }

    // Sort The Array With Merge Sort
    merge_sort(array, left, right);

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