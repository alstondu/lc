//  Created by Yuang Du on 2024/06/13.
//  701. 二叉搜索树中的插入操作

#include "lc.h"

class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if (root == NULL){
            TreeNode* node = new TreeNode(val);
            return node;
        }
        if (val < root->val) root->left = insertIntoBST(root->left, val);
        if (val > root->val) root->right = insertIntoBST(root->right, val);
        return root;
    }
};

int main(){
    return 0;
}