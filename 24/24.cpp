//  Created by Yuang Du on 2024/3/28.
//  Lc 24. 两两交换链表中的节点

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

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummyHead = new ListNode(0); // 设置一个虚拟头结点
        dummyHead->next = head; // 将虚拟头结点指向head，这样方便后面做删除操作
        ListNode* cur = dummyHead;
        while(cur->next != nullptr && cur->next->next != nullptr) {
            ListNode* tmp = cur->next; // 记录临时节点
            ListNode* tmp1 = cur->next->next->next; // 记录临时节点

            cur->next = cur->next->next;    // 步骤一
            cur->next->next = tmp;          // 步骤二
            cur->next->next->next = tmp1;   // 步骤三

            cur = cur->next->next; // cur移动两位，准备下一轮交换
        }
        ListNode* result = dummyHead->next;
        delete dummyHead;
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