//  Created by Yuang Du on 2024/06/12.
//  530. 二叉搜索树的最小绝对差

#include "lc.h"

class Solution {
public:
    int result = INT_MAX;
    TreeNode* pre = NULL;
    void traversal(TreeNode* cur){
        if (cur == NULL) return;
        traversal(cur->left);
        if (pre != NULL){
            result = min(result, cur->val - pre->val);
        }
        pre = cur;
        traversal(cur->right);
    }

    int getMinimumDifference(TreeNode* root) {
        traversal(root);
        return result;
    }
};

int main(){
    return 0;
}