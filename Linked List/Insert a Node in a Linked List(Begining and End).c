#include<stdio.h>
#include<stdlib.h>

struct Node{

int data;
struct Node *next;


};

struct Node *CreateLinkedList(int a[],int size)
{
    struct Node *head = NULL, *temp = NULL, *current = NULL;
    for(int i = 0; i < size; i++)
    {
        temp =(struct Node *) malloc(sizeof(struct Node));
        temp->data = a[i];
        temp->next = NULL;

        if( head == NULL)
        {
            head = temp;
            current = temp;
        }
        else
        {
            current->next = temp;
            current = current->next;
        }
    }

    return head;
};


void insertAtBegining(struct Node *head, int data)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = head;

    struct Node *newHead = temp;
    struct Node *curent = newHead;
    newHead = temp;

     printList(newHead);


}

   void printList(struct Node *head)
   {
       struct Node *curent = head;

    while(curent != NULL)
    {
        printf("%d ->", curent->data);
        curent = curent->next;
    }
    printf("NULL\n");

   }
   ///insert a node end of the list

void insertEnd(struct Node *head, int data){

struct Node *current = head;
///traverse and go to the end of list
while(current->next != NULL)
{

    current  = current->next;
}

///create a new node with data
struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;

 ///insert
  current->next = temp;
  printList(head);

}




int main()
{
   int a[] = { 15,30,45,60,100};
   struct Node *head = NULL;

    head = CreateLinkedList( a,5);

    ///print the linked list
     printList(head);

    ///insert at the begining
    insertAtBegining(head,500);

    insertEnd(head,222);




    return 0;
}
