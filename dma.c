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
int** dma_2d_array() {
    int** array_2d = (int**)malloc( 5 * sizeof(int*));

    for(int i = 0; i < 5; i++){
        array_2d[i] = (int*)malloc(5 * sizeof(int));
    }

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            array_2d[i][j] = i + j;
        }
    }

    return array_2d;
} 

// DMA For An Array Of Arrays
void dma_array_of_arrays() {

} 

int main() {
    // DMA For A struct
    printf("DMA For A struct\n");
    node *root = dma_struct();
    printf("Node: %d\n\n", root->data);

    // DMA For An Array
    printf("DMA For An Array\n");
    int *array = dma_array();
    for(int i = 0; i < 10; i++) {
        printf("Array[%d]: %d\n", i, array[i]);
    }

    printf("\n");

    // DMA For An Array Of Arrays
    printf("DMA For An Array Of Arrays\n");
    int** array_2d = dma_2d_array();

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d, ", array_2d[i][j]);
        }

        printf("\n");
    }

    printf("\n");

    return 0;
}