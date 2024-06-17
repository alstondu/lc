//  Created by Yuang Du on 2024/06/12.
//  236. 二叉树的最近公共祖先

#include "lc.h"

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == NULL) return NULL;
        if (root == p || root == q ) return root;

        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p, q);

        if (left != NULL && right != NULL) return root;
        else if (left == NULL && right != NULL) return right;
        else if (left != NULL && right == NULL) return left;
        else return NULL;
    }
};

int main(){
    return 0;
}