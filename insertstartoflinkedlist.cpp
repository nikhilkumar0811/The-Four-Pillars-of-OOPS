#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct Node
{
    int data;
    struct Node *next;
};

// Function to add a new node at the start
void addAtStart(struct Node **head, int newData)
{
    // Allocate memory for the new node
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    // Assign the data to the new node
    newNode->data = newData;

    // Make the new node point to the current head of the list
    newNode->next = *head;

    // Move the head to point to the new node (i.e., new start of the list)
    *head = newNode;
}

// Function to print the linked list
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main()
{
    // Start with an empty linked list
    struct Node *head = NULL;

    // Add elements to the start of the linked list
    addAtStart(&head, 10);
    addAtStart(&head, 20);
    addAtStart(&head, 30);

    // Print the linked list
    printList(head);

    return 0;
}
