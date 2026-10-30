#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode (int X){
       val = X;
       next = NULL;
    }
};

class Solution{
    public:
    ListNode* middleoftheLinkedList(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};

int main(){
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    Solution obj;

    ListNode* middle = obj.middleoftheLinkedList(head);

    cout << "Middle element: " << middle->val << endl;

    return 0;

}