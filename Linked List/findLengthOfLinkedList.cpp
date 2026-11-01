#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

// Function to find length of loop
int countLoopLength(ListNode* slow, ListNode* fast) {
    int cnt = 1;

    fast = fast->next;

    while (slow != fast) {
        cnt++;
        fast = fast->next;
    }

    return cnt;
}

class Solution {
public:
    int findLengthOfLinkedList(ListNode* head) {

        ListNode* slow = head;
        ListNode* fast = head;

        // Detect cycle
        while (fast != NULL && fast->next != NULL) {

            slow = slow->next;
            fast = fast->next->next;

            // Cycle found
            if (slow == fast) {
                return countLoopLength(slow, fast);
            }
        }

        return 0;
    }
};

int main() {

    // Creating linked list
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    // Creating a loop:
    // 5 -> 3
    head->next->next->next->next->next = head->next->next;

    Solution obj;

    int ans = obj.findLengthOfLinkedList(head);

    cout << "Length of loop: " << ans << endl;

    return 0;
}