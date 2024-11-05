#include<stdio.h>
#include<stdlib.h>
///Create linked list from array

struct Node* createLinkedList(int arr[],int size);

struct Node{
 int data;
 struct Node *next;

};


int main()
{
  int arr[] = {5,10,15};
  struct Node *head;
  head = createLinkedList(arr,3);

  while( head != NULL){
    printf("%d ->", head->data);
    head = head->next;
  }

  printf("NULL\n");

    return 0;
}

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
