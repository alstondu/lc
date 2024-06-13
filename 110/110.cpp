//  Created by Yuang Du on 2024/06/6.
//  110. 平衡二叉树

#include "lc.h"

class Solution {
public:
    int getHeight(TreeNode* root){
        if(root == NULL) return 0;
        int leftH = getHeight(root->left);
        if(leftH == -1) return -1;
        int rightH = getHeight(root->right);
        if(rightH == -1) return -1;
        return abs(leftH - rightH) > 1? -1 : 1 + max(leftH, rightH);
    }
    bool isBalanced(TreeNode* root) {
        return getHeight(root) == -1? false : true;
    }
};

int main(){
    return 0;
}