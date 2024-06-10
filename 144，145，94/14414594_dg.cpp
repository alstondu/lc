//  Created by Yuang Du on 2024/06/4.
//  144，145，94. 二叉树遍历_递归

#include "lc.h"

class Solution{
public:
    void preorderTraversal(TreeNode* root, vector<int> &result){
        if(root == NULL) return;
        result.push_back(root->val);
        preorderTraversal(root->left, result);
        preorderTraversal(root->right, result);
    }
    void inorderTraversal(TreeNode* root, vector<int> &result){
        if(root == NULL) return;     
        preorderTraversal(root->left, result);
        result.push_back(root->val);
        preorderTraversal(root->right, result);
    }
    void postorderTraversal(TreeNode* root, vector<int> &result){
        if(root == NULL) return;
        preorderTraversal(root->left, result);
        preorderTraversal(root->right, result);
        result.push_back(root->val);
    }    

    vector<int> Traversal(TreeNode* root){
        vector<int> result;
        preorderTraversal(root, result);
        // inorderTraversal(root, result);
        // postorderTraversal(root, result);
        return result;
    }
};


int main (){
    return 0;
}