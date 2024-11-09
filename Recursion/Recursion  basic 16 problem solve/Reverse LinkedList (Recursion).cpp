#include<bits/stdc++.h>
using namespace std;

struct Node{
   int data;
    Node* next;
};

 Node* createLinkedList( int a[], int size){
 Node *head = nullptr, *temp =nullptr, *curent = nullptr;

   for( int i = 0; i < size; i++)
   {
    temp = new Node(); //create memory location
    temp->data = a[i];
    temp->next = nullptr;

    if( head == nullptr)
    {
        head = temp;
        curent = temp;
    }
    else{
        curent->next = temp;
        curent = curent->next;
    }

   }
   return head;


};

/// Recursive function to reverse the linked list

 Node* reverseLinkedList(Node* current = nullptr, Node* prev = nullptr){

 ///Base case:if we reach the end, return the new head (prev)
 if( current == nullptr) return prev;

 Node* next = current->next;  /// Store the next node
 current->next = prev;     /// Reverse the link


 ///here, current = next; move to next node
 ///      prev = current; update prev value to the current node
 return reverseLinkedList(next, current);

 }

 /// Function to print linked list
   void printLinkedList(Node* head) {
    while (head != nullptr) {
        cout<<head->data<<" -> ";
        head = head->next; //update head value
    }
 cout<<"NULL\n";

}




int main()
{
    ///first, create linkedList from array in c++
    ///then reverse the linkedlist using recursion

    int a[] = { 2,3,4,5};
    Node* head = createLinkedList(a,4);

    // Print original linked list
    cout << "Original Linked List: ";
    printLinkedList(head);

    // Reverse the linked list using recursion
    //head value is update internally after reverse
    head = reverseLinkedList(head);

    // Print reversed linked list
    cout << "Reversed Linked List: ";
    printLinkedList(head);



    return 0;
}
