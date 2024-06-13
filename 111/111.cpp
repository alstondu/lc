//  Created by Yuang Du on 2024/06/5.
//  104. 二叉树的最小深度

#include "lc.h"

class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root == NULL) return 0;
        int leftD = minDepth(root->left);
        int rightD = minDepth(root->right);

        if(root->left == NULL && root->right != NULL){
            return 1 + rightD;
        }
        else if(root->left != NULL && root->right == NULL){
            return 1 + leftD;
        }
        else return 1 + min(leftD, rightD);
    }
};

int main(){
    return 0;
}