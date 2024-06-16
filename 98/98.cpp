//  Created by Yuang Du on 2024/06/11.
//  98. 验证二叉搜索树

#include "lc.h"

class Solution {
public:
    TreeNode* pre = NULL;
    bool isValidBST(TreeNode* root) {
        if (root == NULL) return true;

        bool left = isValidBST(root->left);
        if (pre != NULL && pre->val >= root->val) return false;
        pre = root;
        bool right = isValidBST(root->right);
        return left && right;
    }
};

int main (){
    return 0;
}