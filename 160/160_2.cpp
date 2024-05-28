// Practice 2
// 2024/05/25

#include "utils.h"

class Solution1  {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* curA = headA;
        ListNode* curB = headB;
        while (curA != curB){
            curA = curA ? curA->next: headB;
            curB = curB ? curB->next: headA;
            /* Can not use this:

            curA = nullptr ? headB : curA->next;
            curB = nullptr ? headA : curB->next;

            because nullptr itself is always 'false',
            leading to curA always be assigned as cur->next
            */
        }
        return curA;
    }
};

class Solution2{
public:
    ListNode* getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA = 0, lenB = 0;
        ListNode* curA = headA;
        ListNode* curB = headB;

        while (curA != NULL){
            curA = curA->next;
            lenA++;
        }
        while (curB != NULL){
            curB = curB->next;
            lenB++;
        }

        curA = headA;
        curB = headB;

        if (lenA < lenB){
            swap(lenA, lenB);
            swap(curA, curB);
        }

        int n = lenA - lenB;

        while (n--){
            curA = curA->next;
        }

        while (curA != NULL && curA != curB){
            curA = curA->next;
            curB = curB->next;
        }
        return curA;
    }
};

int main(){
    return 0;
}