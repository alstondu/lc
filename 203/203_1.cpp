// Practice 1
// 2024/03/26

#include<iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x): val(x), next(NULL){}
};

class Solution{
public:
    ListNode* removeElements(ListNode* head, int val){
        ListNode* dummyhead = new ListNode(0);
        dummyhead->next = head;
        ListNode* cur = dummyhead;
        while(cur->next != NULL){
            if(cur->next->val == val){
                ListNode* tmp = cur->next;
                cur->next = cur->next->next;
                delete tmp;
            }
            else{
                cur = cur->next;
            }
        }
        head = dummyhead->next;
        delete dummyhead;
        return head;
    }
};

int main(){
    Solution solution;

    int values[] = {1, 2, 6, 3, 4, 5, 6};
    int n = sizeof(values)/sizeof(values[0]);

    ListNode* dummyhead = new ListNode(0);
    ListNode* cur = dummyhead;

    for (int i = 0; i < n; ++i){
        cur->next = new ListNode(values[i]);
        cur = cur->next;
    }

    ListNode* head = dummyhead->next;
    delete dummyhead;

    cout << "Original list: ";
    for(cur = head; cur != NULL; cur = cur->next){
        cout << cur->val;
    }
    cout << endl;

    ListNode* result = solution.removeElements(head, 6);

    cout << "Modified list: ";
    for(cur = result; cur != NULL; cur = cur->next){
        cout << cur->val;
    }
    cout << endl;
    
    while(result != NULL){
        ListNode* tmp = result;
        result = result->next;
        delete tmp;
    }

    return 0;
}
