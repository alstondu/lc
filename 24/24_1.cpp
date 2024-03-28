// Practice 1
// 2024/03/28

#include<iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int val): val(val), next(nullptr){}
};

void printLinkedList(ListNode* Head) {
    ListNode* cur = Head;
    while (cur != nullptr) {
        cout << cur->val << " ";
        cur = cur->next;
    }
    cout << endl;
}

class Solution{
public:
    ListNode* swapPairs(ListNode* head){
        ListNode* dummyhead = new ListNode(0);
        dummyhead->next = head;
        ListNode* cur = dummyhead;
        while(cur->next != NULL && cur->next->next != NULL){
            ListNode* tmp = cur->next;
            ListNode* tmp1 = cur->next->next->next;
            cur->next = cur->next->next;
            cur->next->next = tmp;
            cur->next->next->next = tmp1;

            cur = cur->next->next;
        }
        ListNode* result = dummyhead->next;
        delete dummyhead;
        return result;
    }
};

int main() {
    Solution solution;
    
    // 给定的数组
    int values[] = {1, 2, 6, 3, 4, 5, 6};
    int n = sizeof(values) / sizeof(values[0]); // 计算数组长度

    // 创建链表的头结点
    ListNode* dummyhead = new ListNode(0); // 使用临时的虚拟头结点
    ListNode* cur = dummyhead;

    // 构造链表
    for (int i = 0; i < n; ++i) {
        cur->next = new ListNode(values[i]);
        cur = cur->next;
    }
    ListNode* head = dummyhead->next; // 实际的头结点是虚拟头结点的下一个节点
    delete dummyhead; // 删除虚拟头结点

    // 打印原始链表
    cout << "Original list: ";
    printLinkedList(head);

    // 翻转链表
    cout << "Swaped lists: ";
    ListNode* result = solution.swapPairs(head);
    printLinkedList(result);

    // 释放链表内存
    while (result != NULL) {
        ListNode* temp = result;
        result = result->next;
        delete temp;
        temp = nullptr;
    }

    return 0;
}