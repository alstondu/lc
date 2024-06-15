//  Created by Yuang Du on 2024/06/7.
//  105. 从前序与中序遍历序列构造二叉树

#include "lc.h"

class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if (preorder.size() == 0) return NULL;

        int rootValue = preorder[0];
        TreeNode* root = new TreeNode(rootValue);
        if (preorder.size() == 1) return root;

        int index;
        for(index = 0; index < inorder.size(); index++){
            if (inorder[index] == rootValue) break;
        }

        vector<int> leftInorder(inorder.begin(), inorder.begin() + index);
        vector<int> rightInorder(inorder.begin() + index + 1, inorder.end());
        // preorder.resize(preorder.size() - 1);
        vector<int> leftPreorder(preorder.begin() + 1, preorder.begin() + index + 1);
        vector<int> rightPreorder(preorder.begin() + index + 1, preorder.end());

        root->left = buildTree(leftPreorder, leftInorder);
        root->right = buildTree(rightPreorder, rightInorder);

        return root;
    }
};

int main (){
    return 0;
}