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

        if(head == nullptr) return nullptr;

        ListNode *prev = nullptr;
        ListNode *curr_node = head;

        while(curr_node){

            ListNode *temp = curr_node->next;
            curr_node->next = prev;
            prev = curr_node;
            curr_node = temp;
        }
        
        return prev;
    }
};
