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

void insertMiddle(struct Node *head, int position, int value){

  struct Node *temp = head;
  int counter = 0;
  while(temp != NULL)
  {
      counter++;
      if(counter == position){
        //insert your node here
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = value;
        newNode->next = temp->next;
        temp->next = newNode;

      }

      temp = temp->next;
  }
  print(head);





}



int main()
{
  int arr[] = {5,10,15};
  struct Node *head = NULL;
  head = createLinkedList(arr,3);
   print(head);

  insertMiddle(head, 1,226);



    return 0;
}




