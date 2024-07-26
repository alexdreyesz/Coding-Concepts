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
void dma_array() {

} 

// DMA For A 2D Array
void dma_2d_array() {

} 

// DMA For An Array Of Arrays
void dma_array_of_arrays() {

} 

int main() {

    node *root = dma_struct();
    printf("\nNode: %d\n\n", root->data);

    

    return 0;
}