//  Created by Yuang Du on 2024/3/27.
//  Lc 206. 翻转链表

#include <iostream>
using namespace std;

struct ListNode {
    int val;  // 节点上存储的元素
    ListNode *next;  // 指向下一个节点的指针
    ListNode(int x) : val(x), next(NULL) {}  // 节点的构造函数
};

// 打印链表
void printLinkedList(ListNode* Head) {
    ListNode* cur = Head;
    while (cur != nullptr) {
        cout << cur->val << " ";
        cur = cur->next;
    }
    cout << endl;
}

// 双指针解法
class Solution1 {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp; // 保存cur的下一个节点
        ListNode* cur = head;
        ListNode* pre = NULL;
        while(cur) {
            temp = cur->next;  // 保存一下 cur的下一个节点，因为接下来要改变cur->next
            cur->next = pre; // 翻转操作
            // 更新pre 和 cur指针
            pre = cur;
            cur = temp;
        }
        return pre;
    }
};

// 递归解法
class Solution2 {
public:
    ListNode* reverse(ListNode* pre,ListNode* cur){
        if(cur == NULL) return pre;
        ListNode* temp = cur->next;
        cur->next = pre;
        // 可以和双指针法的代码进行对比，如下递归的写法，其实就是做了这两步
        // pre = cur;
        // cur = temp;
        return reverse(cur,temp);
    }
    ListNode* reverseList(ListNode* head) {
        // 和双指针法初始化是一样的逻辑
        // ListNode* cur = head;
        // ListNode* pre = NULL;
        return reverse(NULL, head);
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