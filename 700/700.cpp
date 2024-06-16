//  Created by Yuang Du on 2024/06/11.
//  700. 二叉搜索树中的搜索

#include "lc.h"

// 递归
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if (root == NULL || root->val == val) return root;
        TreeNode* result;
        if (root->val > val) result = searchBST(root->left, val);
        if (root->val < val) result = searchBST(root->right, val);
        return result;
    }
};

// // 迭代
// class Solution {
// public:
//     TreeNode* searchBST(TreeNode* root, int val) {
//         while(root != NULL){
//             if (root->val > val) root = root->left;
//             else if (root->val < val) root = root->right;
//             else return root;
//         }
//         return NULL;
//     }
// };

int main (){
    return 0;
}