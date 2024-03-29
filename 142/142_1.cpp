// Practice 1
// 2024/03/29

#include<iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int val): val(val), next(nullptr){}
};

class Solution{
public:
    ListNode *detectCycle(ListNode *head){
        ListNode *fast = head;
        ListNode *slow = head;
        while (fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
            if (slow == fast){
                ListNode *index1 = slow;
                ListNode *index2 = head;
                while(index1 != index2){
                    index1 = index1->next;
                    index2 = index2->next;
                }
                return index2;
            }
        }
        return NULL;
    }
};

int main(){
    return 0;
}