//  Created by Yuang Du on 2024/06/7.
//  222. 完全二叉树节点的数量

#include "lc.h"

class Solution {
public:
    int countNodes(TreeNode* root) {
        if(root == NULL) return 0;
        TreeNode* left = root->left;
        TreeNode* right = root->right;
        int leftD = 0, rightD = 0;
        while(left){
            left = left->left;
            leftD++;
        }
        while(right){
            right = right->right;
            rightD++;
        }
        if (leftD == rightD) return (2<<leftD) - 1;

        int leftNum = countNodes(root->left);
        int rightNum = countNodes(root->right);
        return leftNum + rightNum + 1;
    }
};

int main (){
    return 0;
}