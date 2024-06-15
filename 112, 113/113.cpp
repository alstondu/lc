//  Created by Yuang Du on 2024/06/7.
//  113. 路径总和 II 

#include "lc.h"

class Solution {
public:
    vector<int> path;
    vector<vector<int>> result;
    void traversal(TreeNode* node, int count){
        if(!node->left && !node->right && count == 0){
            result.push_back(path);
            return;
        }
        if(!node->left && !node->right) return;
        if(node->left){
            path.push_back(node->left->val);
            traversal(node->left, count - node->left->val);
            path.pop_back();
        }
        if(node->right){
            path.push_back(node->right->val);
            traversal(node->right, count - node->right->val);
            path.pop_back();
        }
        
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if(!root) return result;
        path.push_back(root->val);
        traversal(root, targetSum - root->val);
        return result;
    }
};

int main (){
    return 0;
}