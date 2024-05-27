// Practice 2
// 2024/05/24

#include "utils.h"

class Solution1 {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* pre = nullptr;
        ListNode* cur = head;
        ListNode* tmp;

        while (cur){
            tmp = cur->next;
            cur->next = pre;
            pre = cur;
            cur = tmp;
        }
        return pre;
    }
};

class Solution2 {
public:
    ListNode* reverse(ListNode* pre, ListNode* cur){
        if (cur == nullptr) return pre;
        ListNode* tmp = cur->next;
        cur->next = pre;
        return reverse(cur, tmp);
    }

    ListNode* reverseList(ListNode* head) {
        return reverse(nullptr, head);
    }
};