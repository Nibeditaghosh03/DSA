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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        if (head == NULL)
            return NULL;

        // Count total nodes
        int count = 0;
        ListNode* temp = head;

        while (temp != NULL) {
            count++;
            temp = temp->next;
        }

        // If we need to remove the head
        if (n == count) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        // Position of node before the one to delete
        int pos = count - n;

        temp = head;

        for (int i = 1; i < pos; i++) {
            temp = temp->next;
        }

        ListNode* deleteNode = temp->next;
        temp->next = temp->next->next;
        delete deleteNode;

        return head;
    }
};