#include <stdio.h>
#include <stdlib.h>

// Struct To Be DMA
typedef struct node {
    int data;
    struct node *next;
} node;

// DMA For A struct
node* dma_struct() {
    node* new_node = (node*)malloc(sizeof(node));
    new_node->data = rand() % 10;
    new_node->next = NULL;

    return new_node;
}

// DMA For An Array
int* dma_array() {
    int *array = (int*)malloc(10 * sizeof(int));

    for(int i = 0; i < 10; i++) {
        array[i] = i * 2; 
    }

    return array;
} 

// DMA For A 2D Array
void dma_2d_array() {

} 

// DMA For An Array Of Arrays
void dma_array_of_arrays() {

} 

int main() {
    // DMA For A struct
    node *root = dma_struct();
    printf("\nNode: %d\n\n", root->data);

    // DMA For An Array
    int *array = dma_array();
    for(int i = 0; i < 10; i++) {
        printf("Array[%d]: %d\n", i, array[i]);
    }

    printf("\n");

    return 0;
}