//  Created by Yuang Du on 2024/3/29.
//  Lc 142. 环形链表

#include<iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int val): val(val), next(nullptr){}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
            // 快慢指针相遇，此时从head 和 相遇点，同时查找直至相遇
            if (slow == fast) {
                ListNode* index1 = fast;
                ListNode* index2 = head;
                while (index1 != index2) {
                    index1 = index1->next;
                    index2 = index2->next;
                }
                return index2; // 返回环的入口
            }
        }
        return NULL;
    }
};

int main(){
    return 0;
}