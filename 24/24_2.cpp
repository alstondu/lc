// Practice 2
// 2024/05/25

#include "utils.h"

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummyHead = new ListNode(0);
        dummyHead->next = head;
        ListNode* cur = dummyHead;

        while (cur->next != nullptr && cur->next->next != nullptr){
            ListNode* tmp1 = cur->next;
            ListNode* tmp2 = cur->next->next->next;

            cur->next = cur->next->next;
            cur->next->next = tmp1;
            cur->next->next->next = tmp2;

            cur = cur->next->next;
        }
        head = dummyHead->next;
        delete dummyHead;
        return head;
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