// Steven Sousa // Procedural Programming // 4Cs // Homework 04 // 04-17-2021
// This code is a copy from prof. James Fanning's Day 17_03. The only changes are those requested by Homework 4.

#include <stdio.h>
#include <stdlib.h>

// A linked list node
struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

void printList(struct Node *node);
void push(struct Node** head_ref, int new_data);
void insertAfter(struct Node* prev_node, int new_data);
void append(struct Node** head_ref, int new_data);
void deleteNode(struct Node** head_ref, int position);

int main(){

    struct Node* head = NULL;
    printf("\n Step 0: ");
    printList(head);
    append(&head, 6);
    printf("\n Step 1: ");
    printList(head);
    push(&head, 7);
    printf("\n Step 2: ");
    printList(head);
    push(&head, 1);
    printf("\n Step 3: ");
    printList(head);
    append(&head, 4);
    printf("\n Step 4: ");
    printList(head);


    insertAfter(head, 8);
//insertAfter(head->next, 8);
    printf("\n Step 5: ");
    printList(head);

    deleteNode(&head, 3);
    printf("\n Step 6: ");
    printList(head);
    return 0;
}

void printList(struct Node *node){

    while (node != NULL){
        printf(" %d ", node->data);
        node = node->next;
    }
}

void push(struct Node** head_ref, int new_data){

    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    new_node->data = new_data;
    new_node->next = (*head_ref);
    new_node->prev = NULL;

    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;

    (*head_ref) = new_node;
}

void insertAfter(struct Node* prev_node, int new_data){

    if (prev_node == NULL) {
        printf("the given previous node cannot be NULL");
        return;
    }

    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    new_node->data = new_data;

    new_node->next = prev_node->next;

    prev_node->next = new_node;

    new_node->prev = prev_node;

    if (new_node->next != NULL)
        new_node->next->prev = new_node;
}

void append(struct Node** head_ref, int new_data){

    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    struct Node* last = *head_ref;
    new_node->data = new_data;

    new_node->next = NULL;

    if (*head_ref == NULL) {
        new_node->prev = NULL;
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL)
        last = last->next;

    last->next = new_node;
    new_node->prev = last;
}

void deleteNode(struct Node **head_ref, int position){

    if (*head_ref == NULL)
        return;
    struct Node* temp = *head_ref;

    if (position == 0){
        *head_ref = temp->next;
        temp->next->prev = NULL;
        free(temp);
        return;
    }

    for (int i=1; temp!=NULL && i<position; i++)
        temp = temp->next;

    if (temp == NULL || temp->next == NULL)
        return;

    struct Node *next = temp->next->next;

    temp->next->prev = temp->prev;
    free(temp->next);
    temp->next = next;
}
