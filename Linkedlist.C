#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void linkedlistTraversal(struct Node* ptr) {
    while(ptr != NULL) {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main() {
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;

    // Allocate memory for nodes in the linked list
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Initialize node data and link them
    head->data = 7;
    head->next = second;

    second->data = 10;
    second->next = third;

    third->data = 13;
    third->next = fourth;

    fourth->data  = 16;
    fourth->next = NULL;

    // Call the linkedlistTraversal function
    linkedlistTraversal(head);

    return 0;
}

