class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

        if (head == NULL || head->next == NULL || k == 0)
            return head;

        int len = 1;
        ListNode* tail = head;

        while (tail->next) {
            tail = tail->next;
            len++;
        }

        k = k % len;

        if (k == 0)
            return head;

        // Make circular
        tail->next = head;

        ListNode* curr = head;

        // Move to new tail
        for (int i = 0; i < len - k - 1; i++) {
            curr = curr->next;
        }

        ListNode* newHead = curr->next;
        curr->next = NULL;

        return newHead;
    }
};