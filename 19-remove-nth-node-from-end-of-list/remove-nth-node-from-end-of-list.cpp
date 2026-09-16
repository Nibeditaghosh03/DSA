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
     int count = 0;
     ListNode* temp = head;

     while(temp != NULL){
        count++;
        temp = temp->next;
     }
     if(count == n){
        ListNode* newHead = head->next;
        delete head;
        return newHead;
     }
     int res = count - n;
     temp = head;
     for(int i = 1; i < res; i++){
        temp = temp->next;
     }
     ListNode* delNode = temp->next;
     temp->next = temp->next->next;
     delete delNode;
     return head;
    }
};