//  Created by Yuang Du on 2024/06/14.
//  538. 把二叉搜索树转换为累加树

#include "lc.h"

class Solution {
public:
    TreeNode* pre = NULL;
    TreeNode* convertBST(TreeNode* root) {
        
        if (root == NULL) return NULL;
        root->right = convertBST(root->right);

        if (pre != NULL) root->val += pre->val;
        pre = root;

        root->left = convertBST(root->left);
        return root;
    }
};

int main(){
    return 0;
}