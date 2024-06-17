//  Created by Yuang Du on 2024/06/12.
//  501. 二叉搜索树中的众数

#include "lc.h"

class Solution {
public:
    vector<int> result;
    TreeNode* pre = NULL;
    int count = 0;
    int maxCount = 0;
    void traversal(TreeNode* cur){
        if (cur == NULL) return;
        traversal(cur->left);
        if (pre == NULL || cur->val != pre->val) count = 1;
        else count++;
        if (count == maxCount) result.push_back(cur->val);
        if (count > maxCount){
            maxCount = count;
            result.clear();
            result.push_back(cur->val);
        }
        pre = cur;
        traversal(cur->right);
        return;
    }
    vector<int> findMode(TreeNode* root) {
        traversal(root);
        return result;
    }
};

int main(){
    return 0;
}