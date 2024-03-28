// Practice 1
// 2024/03/27

#include <iostream>
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

class Solution1 {
public:
    ListNode* reverseList(ListNode* head){
        ListNode* cur = head;
        ListNode* pre = NULL;
        ListNode* tmp;
        while(cur){
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
    ListNode* reverseList(ListNode* head){
        return reverse(NULL, head);
    }

    ListNode* reverse(ListNode* pre, ListNode* cur){
        if (cur == NULL) return pre;
        ListNode* tmp = cur->next;
        cur->next = pre;
        return reverse(cur, tmp);
    }
};

int main() {
    Solution1 solution1;
    Solution2 solution2;
    
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
    cout << "Reverted lists1: ";
    ListNode* result1 = solution1.reverseList(head);
    printLinkedList(result1);
    cout << "Reverted lists2: ";
    ListNode* result2 = solution2.reverseList(result1);
    printLinkedList(result2);

    // 释放链表内存
    while (result2 != NULL) {
        ListNode* temp2 = result2;
        result2 = result2->next;
        delete temp2;
        temp2 = nullptr;
    }

    return 0;
}