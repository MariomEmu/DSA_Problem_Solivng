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
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;


      //Travel until fast pointer reaches
      //the last node or null
        while( fast != nullptr && fast->next != nullptr)
        {
            //slow pointer move 1 node
            slow = slow->next;
            //fast pointer move 2 node
            fast = fast->next->next;
        }

    ///return middle node
        return slow;

    }
};

//TC o(n/2)~ o(n)
//sc o(1) , we dont need any extra space
