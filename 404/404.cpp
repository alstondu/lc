//  Created by Yuang Du on 2024/06/7.
//  404. 左叶子之和

#include "lc.h"

class Solution {
public:
    int result = 0;
    int sumOfLeftLeaves(TreeNode* root) {
        if(root == NULL) return 0;
        if(root->left == NULL && root->right == NULL) return 0;
        if(root->left != NULL && root->left->left == NULL && root->left->right == NULL) {
            result += root->left->val;
        }
        sumOfLeftLeaves(root->left);
        sumOfLeftLeaves(root->right);
        return result;
    }
};

int main(){
    return 0;
}