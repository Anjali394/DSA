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

    ListNode* reverse(ListNode* node){
        ListNode* curr = node;
        ListNode* prev = NULL;
        ListNode* next = NULL;

        while(curr){
            next = curr->next;
            curr->next = prev;
            
            // move pointers
            prev = curr;
            curr = next;
        }
        return prev;

    }

    void reorderList(ListNode* head) {
    if (head == nullptr || head->next == nullptr)
        return;

    ListNode* slow = head;
    ListNode* fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // slow is now at the middle
    // reverse list after slow
    ListNode* l2 = reverse(slow->next);
    slow->next = NULL;

    ListNode* first = head; // 1->2
    ListNode* second = l2; // 4->3

    while(first && second){
        ListNode* firstnext = first->next; //2
        ListNode* secondnext = second->next; //3

        first->next = second; //1->4  // 1-4->2->3
        second->next = firstnext; //1->4->2 // 1->4->2->3->null
        first = firstnext;  // 2
        second = secondnext; // 3
    }
}
};