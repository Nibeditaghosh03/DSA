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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        ListNode* groupPrev = dummy;

        while(true) {
            ListNode* temp = groupPrev;
            for(int i = 0; i < k; i++) {
                temp = temp->next;

                if(temp == nullptr){
                    return dummy->next;
                }
            }
            ListNode* groupNext = temp->next;
            ListNode* oldStart = groupPrev->next;

            ListNode* prev = groupNext;
            ListNode* curr = groupPrev->next;
            while(curr != groupNext) {
             ListNode* next = curr->next;

             curr->next = prev;

             prev = curr;
             curr = next;
            }
            groupPrev->next = prev;
            groupPrev = oldStart;
        }
        return dummy->next;
    }
};