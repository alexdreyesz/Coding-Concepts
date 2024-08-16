#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
} Node;

int main () {

    Node * head = (Node*)malloc(sizeof(Node));

    Node * new_node = (Node*)malloc(sizeof(Node));

    head->data = 5;
    new_node->data = 6;

    head->next = new_node;



    printf("Head: %d \n", head->data); 
    printf("Node: %d \n", head->next->data);

    return 0;
}