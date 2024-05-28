// Practice 2
// 2024/05/25

#include "utils.h"

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while (fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
            if (fast == slow){
                ListNode* index1 = fast;
                ListNode* index2 = head;
                while (index1 != index2){
                    index1 = index1->next;
                    index2 = index2->next;
                }
                return index1;
            }
        }
        return NULL;
    }
};

int main(){
    return 0;
}