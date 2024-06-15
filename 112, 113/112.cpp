//  Created by Yuang Du on 2024/06/7.
//  112. 路径总和

#include "lc.h"

class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (!root) return false;
        if (!root->left && !root->right && targetSum == 0) return true;
        if (!root->left && !root->right) return false;
        if (hasPathSum(root->left, targetSum - root->left->val)) return true;
        if (hasPathSum(root->right, targetSum - root->right->val)) return true;
        return false;
        // return (hasPathSum(root->left, targetSum - root->left->val) || (hasPathSum(root->right, targetSum - root->right->val));
    }
};

int main (){
    return 0;
}