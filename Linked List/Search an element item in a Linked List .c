/*
#include<stdio.h>
#include<stdlib.h>
///Search an element/ item in a Linked List in C
// do this , first create linked list then search value
//you can create also linkedlist from array then search
//both way  u can do




struct Node* createLinkedList(int arr[],int size);
int searchInLinkedList(struct Node *head, int value);

struct Node{
 int data;
 struct Node *next;

};


int main()
{

  int arr[] = {5,10,15,60};
  struct Node *head;
  head = createLinkedList(arr,4);

  printf("Index: %d\n", searchInLinkedList(head,60));

    return 0;
}


///Search an element/ item in a Linked List using this part logic
int searchInLinkedList(struct Node *head, int value)
{
    int index = 1;

    while( head != NULL )
    {
        if( head->data == value)
        {
            return index;
        }
        index++;
        head = head->next;
    }
    return -1;

}

///create LinkedList from array using this part logic
struct Node* createLinkedList(int arr[],int size)
{  ///node type pointer variable by default null set
    struct Node *head = NULL, *temp = NULL, *current = NULL;

    for( int i = 0; i < size; i++)
    {
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = arr[i];
        temp->next = NULL;

        if(head == NULL){
            head = temp;
            current = temp;
        }

        else{
            current->next = temp;
            current = current->next;
        }
    }

    return head;



}
*/




//this part is , first create linked list then search value


#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to search for an element in the linked list
int searchInLinkedList(struct Node* head, int value) {
    int index = 0;  // Start index from 0 to match array-like indexing

    while (head != NULL) {
        if (head->data == value) {
            return index;  // Return the index if the value is found
        }
        index++;
        head = head->next;  // Move to the next node
    }
    return -1;  // Return -1 if the value is not found
}

// Main function to create a linked list and test the search function
int main() {
    // Create node pointer variables
    struct Node *a = NULL, *b = NULL, *c = NULL;

    // Allocate memory dynamically for each node
    a = (struct Node*)malloc(sizeof(struct Node));
    b = (struct Node*)malloc(sizeof(struct Node));
    c = (struct Node*)malloc(sizeof(struct Node));

    // Store data in each node
    a->data = 10;
    b->data = 20;
    c->data = 30;

    // Link the nodes
    a->next = b;
    b->next = c;
    c->next = NULL;

    // Search for a value in the linked list
    int valueToSearch = 20;
    int position = searchInLinkedList(a, valueToSearch);

    // Output the result of the search
    if (position != -1) {
        printf("Element %d found at position %d.\n", valueToSearch, position);
    } else {
        printf("Element %d not found in the list.\n", valueToSearch);
    }

    // Free allocated memory
    free(a);
    free(b);
    free(c);

    return 0;
}









