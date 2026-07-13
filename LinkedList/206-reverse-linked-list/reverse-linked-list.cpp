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
        if(head == NULL || head->next ==NULL)
            return head;
        // reverse the rest of linked list and put
        // the first element at the end
        ListNode* rest = reverseList(head->next);

        // Make the current head as last node of
        // remaining linked list
        head->next->next = head;

        // Update next of current head to NULL
        head->next = NULL;

        return rest;


    }
};