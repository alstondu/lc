//  Created by Yuang Du on 2024/06/5.
//  102. 二叉树的层序遍历

#include "lc.h"

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        queue<TreeNode*> que;
        if(root != NULL) que.push(root);
        while(!que.empty()){
            int size = que.size();
            vector<int> vec;
            while(size--){
                TreeNode* node = que.front();
                que.pop();
                if(node->left) que.push(node->left);
                if(node->right) que.push(node->right);
                vec.push_back(node->val);
            }
            result.push_back(vec);
        }
        return result;
    }
};

int main (){
    return 0;
}