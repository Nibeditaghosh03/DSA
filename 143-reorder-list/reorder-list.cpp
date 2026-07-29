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
    void reorderList(ListNode* head) {

        // Step 1: Find the middle
        ListNode* slow = head;
        ListNode* fast = head->next;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Step 2: Split and reverse the second half
        ListNode* curr = slow->next;
        slow->next = nullptr;

        ListNode* prev = nullptr;

        while (curr != nullptr) {
            ListNode* next = curr->next;

            curr->next = prev;
            prev = curr;
            curr = next;
        }

        // Step 3: Merge the two halves
        ListNode* first = head;

        while (prev != nullptr) {
            ListNode* temp1 = first->next;
            ListNode* temp2 = prev->next;

            first->next = prev;
            prev->next = temp1;

            first = temp1;
            prev = temp2;
        }
    }
};