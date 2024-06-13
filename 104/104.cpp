//  Created by Yuang Du on 2024/06/5.
//  104. 二叉树的最大深度

#include "lc.h"

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL) return 0;
        int leftH = maxDepth(root->left);
        int rightH = maxDepth(root->right);
        return 1+max(leftH, rightH);
    }
};

int main(){
    return 0;
}