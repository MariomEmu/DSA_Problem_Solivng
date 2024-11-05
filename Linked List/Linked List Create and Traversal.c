#include<stdio.h>
#include<stdlib.h>


//Create node
struct Node{
 int data;
 struct Node *next; // type struc Node, pointer *next which is address



};


int main()
{
    /// create node pointer variable
    struct Node *a = NULL;
    struct Node *b = NULL;
    struct Node *c = NULL;

    //memory allocate dynamically
    a = (struct Node*)malloc(sizeof(struct Node));
    b = (struct Node*)malloc(sizeof(struct Node));
    c = (struct Node*)malloc(sizeof(struct Node));

    //store data within node
    a->data = 10;
    b->data = 20;
    c->data = 30;

   // (next) like point(address to another node)

    a->next = b;
    b->next = c;
    c->next = NULL;

    ///For traversal using while loop
    ///Traverse a Linked List
    while( a != NULL)
        {
            printf("%d -> ", a->data);
            a = a->next;

        }

    return 0;
}
