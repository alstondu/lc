// Practice 1
// 2024/03/29

#include<iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int val): val(val), next(nullptr){}
};

class Solution{
public:
    ListNode* getIntersectionNode(ListNode *headA, ListNode *headB){
        ListNode *curA = headA;
        ListNode *curB = headB;
        int lenA = 0; //int lenA = 0, lenB = 0;
        int lenB = 0;
        while (curA != NULL){
            lenA++;
            curA = curA->next;
        }
        while (curB != NULL){
            lenB++;
            curB = curB->next;
        }
        curA = headA;
        curB = headB;
        if (lenA < lenB){
            swap(lenA, lenB);
            swap(curA, curB);
        }
        int diff = lenA - lenB;
        while(diff--){
            curA = curA->next;
        }
        while(curA != NULL){
            if (curA == curB){
                return curA;
            }
            curA = curA->next;
            curB = curB->next;
        }
        return NULL;
    }
};

int main(){
    return 0;
}