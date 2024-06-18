//  Created by Yuang Du on 2024/06/13.
//  450. 删除二叉搜索树中的节点

#include "lc.h"

class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (root == NULL) return NULL; // Situation 1
        if (root->val == key){
            // Situation 2
            if (root->left == NULL && root->right == NULL){
                auto retNode = root;
                delete root;
                return retNode;
            }
            // Situation 3
            else if (root->left == NULL && root->right != NULL){
                auto retNode = root->right;
                delete root;
                return retNode;
            }
            // Situation 4
            else if (root->left != NULL && root->right == NULL){
                auto retNode = root->left;
                delete root;
                return retNode;
            }
            // Situation 5
            else {
                TreeNode* cur = root->right;
                while (cur->left != NULL) cur = cur->left;
                cur->left = root->left;
                auto retNode = root->right;
                delete root;
                return retNode;
            }
        }
        if (root->val > key) root->left = deleteNode(root->left, key);
        if (root->val < key) root->right = deleteNode(root->right, key);
        return root;
    }
};

int main(){
    return 0;
}