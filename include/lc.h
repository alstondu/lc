#ifndef UTILS_H
#define UTILS_H
#include<iostream>
#include <vector>
#include <unordered_set>
#include<unordered_map>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;

// ListNode
struct ListNode {
    int val;  // 节点上存储的元素
    ListNode *next;  // 指向下一个节点的指针
    ListNode(int x) : val(x), next(NULL) {}  // 节点的构造函数
};

// TreeNode
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x): val(x), left(NULL), right(NULL){};
};

void displayMatrix(const std::vector<std::vector<int>>& matrix) {
    for (const auto& row : matrix) { // Iterate through each row
        for (const auto& element : row) { // Iterate through each element in the row
            std::cout << element << " "; // Print element followed by a space
        }
        std::cout << std::endl; // After each row, print a newline
    }
}

void printLinkedList(ListNode* Head) {
    ListNode* cur = Head;
    while (cur != nullptr) {
        cout << cur->val << " ";
        cur = cur->next;
    }
    cout << endl;
}

#endif