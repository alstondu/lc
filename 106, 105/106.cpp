//  Created by Yuang Du on 2024/06/8.
//  106. 从中序与后序遍历序列构造二叉树

#include "lc.h"

class Solution {
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if (postorder.size() == 0) return NULL;

        int rootValue = postorder[postorder.size() - 1];
        TreeNode* root = new TreeNode(rootValue);
        if (postorder.size() == 1) return root; 

        int index;
        for (index = 0; index < inorder.size(); index++){
            if (inorder[index] == rootValue) break;
        }

        vector<int> leftInorder(inorder.begin(), inorder.begin() + index);
        vector<int> rightInorder(inorder.begin() + index + 1, inorder.end());
        // postorder.resize(postorder.size() - 1);
        vector<int> leftPostorder(postorder.begin(), postorder.begin() + index);
        vector<int> rightPostorder(postorder.begin() + index, postorder.end() - 1);

        root->left = buildTree(leftInorder, leftPostorder);
        root->right = buildTree(rightInorder, rightPostorder);

        return root;
    }
};

int main (){
    return 0;
}