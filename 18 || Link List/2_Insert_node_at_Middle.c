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

// Function to insert a node in the middle of the list
void insertInMiddle(struct Node* prevNode, int x, int y) {
    if (prevNode == NULL) {
        printf("Previous node cannot be NULL\n");
        return;
    }
    struct Node* newNode = createNode(x, y);
    newNode->next = prevNode->next;
    prevNode->next = newNode;
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
int main() {
    struct Node* head = NULL;

    // 1. Creation of linked list
    insertAtEnd(&head, 1, 1);
    insertAtEnd(&head, 2, 2);
    insertAtEnd(&head, 3, 3);
    printf("Linked List after creation: ");
    printList(head);

    // Find the node after which we want to insert
    struct Node* middleNode = head->next; // This is now the second node (2, 2)
    
    // 4. Insert a new node in the middle
    insertInMiddle(middleNode, 4, 4); // Inserting (4, 4) after (2, 2)
    printf("Linked List after inserting node in the middle: ");
    printList(head);
}
