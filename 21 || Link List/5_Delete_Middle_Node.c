#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct Node {
    int x;
    int y;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int x, int y) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->x = x;
    newNode->y = y;
    newNode->next = NULL;
    return newNode;
}

// Function to delete a node in the middle of the list
void deleteMiddleNode(struct Node** head, struct Node* middleNode) {
    if (*head == NULL || middleNode == NULL || middleNode->next == NULL) {
        printf("Invalid middle node\n");
        return;
    }
    struct Node* temp = *head;
    while (temp->next != middleNode) {
        temp = temp->next;
    }
    temp->next = middleNode->next;
    free(middleNode);
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("(%d, %d) -> ", temp->x, temp->y);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Function to insert a node at the end of the list
void insertAtEnd(struct Node** head, int x, int y) {
    struct Node* newNode = createNode(x, y);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Main function
int main() 
{
    struct Node* head = NULL;

    // 1. Creation of linked list
    insertAtEnd(&head, 1, 1);
    insertAtEnd(&head, 2, 2);
    insertAtEnd(&head, 3, 3);
    printf("Linked List after creation: ");
    printList(head);

    // Deleting the middle node
    struct Node* middleNode = head->next; // In this case, the middle node is the second node
    deleteMiddleNode(&head, middleNode);
    printf("Linked List after deleting middle node: ");
    printList(head);

    return 0;
}
