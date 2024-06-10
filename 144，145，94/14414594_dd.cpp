//  Created by Yuang Du on 2024/06/4.
//  144，145，94. 二叉树遍历_迭代

#include "lc.h"

class Solution {
public:
    vector<int> orderTraversal(TreeNode* root) {
        vector<int> result;
        stack<TreeNode*> st;
        if(root != NULL) st.push(root);
        while(!st.empty()){
            TreeNode* node = st.top();
            if(node != NULL){
                st.pop();
                // inorder
                if(node->right) st.push(node->right);
                st.push(node);
                st.push(NULL);

                if(node->left) st.push(node->left);

                // // preorder
                // if(node->right) st.push(node->right);
                // if(node->left) st.push(node->left);
                // st.push(node);
                // st.push(NULL);

                // // postorder
                // st.push(node);
                // st.push(NULL);
                // if(node->right) st.push(node->right);
                // if(node->left) st.push(node->left);
            }
            else{
                st.pop();
                node = st.top();
                st.pop();
                result.push_back(node->val);
            }
        }
        return result;
    }
};

int main (){
    return 0;
}