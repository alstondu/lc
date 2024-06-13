//  Created by Yuang Du on 2024/06/5.
//  101. 对称二叉树

#include "lc.h"

class Solution {
public:
    bool compare(TreeNode* left, TreeNode* right){
        if(left == NULL && right != NULL) return false;
        else if(left != NULL && right == NULL) return false;
        else if(left == NULL && right == NULL) return true;
        else if(left->val != right->val) return false;
        else{
            bool outside = compare(left->left, right->right);
            bool inside = compare(left->right, right->left);
            return outside && inside;
        }
    }

    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return true;
        return compare(root->left, root->right);
    }
};

int main(){
    return 0;
}