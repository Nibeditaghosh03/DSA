#include<iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;

    ListNode(int X){
    val = X;
    next = NULL;
    }
};

class Solution{
    public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;

           if (slow == fast) return true;
        }
        return false;
    }
};

int main(){
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    
    head->next->next->next->next = head->next;
    
    Solution obj;

    bool result = obj.hasCycle(head);

    if(result) {
        cout << "Cycle detected" << endl;
    }else{
        cout << "No cycle deteted" << endl;
    }
    return 0;
};