//  Created by Yuang Du on 2024/06/25.
//  968. 监控二叉树

#include "lc.h"

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int result = 0;
    int traversal(TreeNode* cur){
        if (cur == NULL) return 2; // 空节点视为有覆盖
        int left = traversal(cur->left); // 左
        int right = traversal(cur->right); // 右
        // 中
        // 左右子节点都有覆盖，当前节点无覆盖，以在父节点添加摄像头
        if (left == 2 && right == 2) return 0;

        // 左右子节点至少有一个无覆盖，则当前节点需要添加摄像头
        if (left == 0 || right == 0){
            result++;
            return 1;
        }

        // 左右节点至少有一个有摄像头，当前节点有覆盖
        if (left == 1 || right == 1) return 2;
        
        return -1;
    }

    int minCameraCover(TreeNode* root) {
        // 跟节点如果无覆盖，则需要添加摄像头
        if (traversal(root) == 0) result++;
        return result;
    }
};

int main(){
    return 0;
}
