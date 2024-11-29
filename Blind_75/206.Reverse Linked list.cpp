/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        if( head == nullptr) return nullptr;  /// if there is no list

        if( head->next == nullptr) return head; //if there is available single list in the linkedlist


       ListNode* preNode = nullptr; // Declare preNode as a pointer
       ListNode* currentNode = head;  // Initialize currentNode to the head pointer

        while( currentNode != nullptr)
        {
            ListNode* NextNode = currentNode->next; ///store current->next value within nextNode
            currentNode->next = preNode; // reverse the link it point the null
            preNode = currentNode;  // Move preNode to currentNode
            currentNode = NextNode; ///Move to the next Node

        }

        head = preNode;

     return head;

    }
};

/*
this is iterative way to solve this
tc = o(n)
sc = o(1); cz not consume any datastructure just use some temporary variable
This is optimal solution rather then recursion
*/

