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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyNode = new ListNode(-1);
        ListNode* current = dummyNode;

        int carry = 0; //set default carry

        while( l1 != nullptr || l2 != nullptr)
        {
            int sum = 0 + carry; ///sum initiize

            if( l1 != nullptr) //use number from list1
            {
                sum+= l1->val;
                l1 = l1->next;
            }
            if( l2 != nullptr)
            {
                sum+= l2->val;
                l2 = l2->next;
            }

           carry = sum / 10; // get carry first
           sum = sum % 10;  // Reduce sum to single digit
           current->next = new ListNode(sum); // Create new node with current digit
           current = current->next;
        }

        if(carry == 1) current->next = new ListNode(1); // If there's still a carry, add a new node for it

           return dummyNode->next; //return head list of sum

    }
};
/*
TC = o(N), n is length of larger linked list
sc = o(N)
*/
