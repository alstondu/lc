//  Created by Yuang Du on 2024/06/13.
//  235. 二叉搜索树的最近公共祖先

#include "lc.h"

// 递归
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == NULL) return NULL;

        if (root->val > p->val && root->val > q->val) return lowestCommonAncestor(root->left, p, q);
        else if (root->val < p->val && root->val < q->val) return lowestCommonAncestor(root->right, p, q);
        else return root;
    }
};

// //迭代
// class Solution {
// public:
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//         while (root){
//             if (root->val > p->val && root->val > q->val) root = root->left;
//             else if (root->val < p->val && root->val < q->val) root =root->right;
//             else return root;
//         }
//         return NULL;
//     }
// };

int main(){
    return 0;
}