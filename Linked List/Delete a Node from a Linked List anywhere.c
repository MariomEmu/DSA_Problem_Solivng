
#include<stdio.h>
#include<stdlib.h>
///Create linked list from array

struct Node* createLinkedList(int arr[],int size);

struct Node{
 int data;
 struct Node *next;

};

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


void print(struct Node *head){

  struct Node *temp = head;

   while( temp != NULL){
    printf("%d ->", temp->data);
    temp = temp->next;
  }

  printf("NULL\n");



}


struct Node *delete(struct Node *head, int data)
{
    struct Node *dummyHead = (struct Node *)malloc(sizeof(struct Node));
     dummyHead->next = head;
     struct Node *temp = dummyHead;

     while( temp->next != NULL)
     {
         if(temp->next->data == data){
                //delete logic
            temp->next = temp->next->next;
            break;
         }
         else{
                //moves to the next node,
                 temp = temp->next;

         }

     }


    return dummyHead->next;
};








int main()
{
  int arr[] = {1,15,10,15,24,70};
  struct Node *head = NULL;
  head = createLinkedList(arr,6);
   print(head);

  struct Node *newHead = delete(head,15);
  print(newHead);


    return 0;
}




