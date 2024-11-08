#include<stdio.h>
#include<stdlib.h>

struct Node{
  int data;
  struct Node *next;


};

struct Node *CreateLinkedList(int arr[],int size)
{
    struct Node *head = NULL, *temp = NULL, *curent = NULL;

     for( int i = 0; i < size; i++)
     {
          temp =(struct Node *)malloc(sizeof(struct Node));
          temp->data = arr[i];
          temp->next = NULL;

          if( head == NULL)
          {
              head = temp;
              curent = temp;
          }
          else
          {
              curent->next = temp;
              curent = curent->next;
          }
     }
      return head;

};


void reverseLinkedList(struct Node *head){

  struct Node *prev = NULL, *current = head, *next = NULL;

  while( current != NULL)
  {
      //store the next node
      next = current->next;
      //reverse the link/connect
      current->next = prev;
      //propagate
      prev = current;
      current = next;
  }
   head = prev;

   //print reverseLinkedList
    while( head != NULL){
    printf("%d ->", head->data);
    head = head->next;
      }

     printf("NULL\n");

};



int main()
{
    int arr[] = {5,10,15};
    struct Node *head = NULL;
    head=CreateLinkedList(arr,3);

    struct Node *newHead = head;
    while( head != NULL){
    printf("%d ->", head->data);
    head = head->next;
      }

     printf("NULL\n");

    //call
    reverseLinkedList(newHead);
}
