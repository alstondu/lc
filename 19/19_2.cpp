// Practice 2
// 2024/05/25

#include "utils.h"

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummyHead = new ListNode(0);
        dummyHead->next = head;
        ListNode* fast = dummyHead;
        ListNode* slow = dummyHead;

        while(n-- && fast != NULL){
            fast = fast->next;
        }
        fast = fast->next;

        while(fast != NULL){
            slow = slow->next;
            fast = fast->next;
        }

        ListNode* tmp = slow->next;
        slow->next = slow->next->next;
        delete tmp;
        tmp = nullptr;
        head = dummyHead->next;
        delete dummyHead;

        return head;
    }
};

int main(){
    return 0;
}

