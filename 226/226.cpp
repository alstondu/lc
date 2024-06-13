//  Created by Yuang Du on 2024/06/5.
//  226. 翻转二叉树

#include "lc.h"

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL) return root;
        // Preorder: mid, left, right
        swap(root->left, root->right);
        invertTree(root->left);
        invertTree(root->right);

        // // Postorder:left, right, mid
        // invertTree(root->left);
        // invertTree(root->right);
        // swap(root->left, root->right);

        // // Midorder: left, mid, left
        // invertTree(root->left);
        // swap(root->left, root->right);
        // invertTree(root->left);
        return root;
    }
};

int main(){
    return 0;
}