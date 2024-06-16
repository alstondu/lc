//  Created by Yuang Du on 2024/06/8.
//  513. 找树左下角的值

#include "lc.h"

// 层序遍历
class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*> que;
        int result = 0;
        if(root != NULL) que.push(root);
        while(!que.empty()){
            int size = que.size();
            for(int i = 0; i < size; i++){
                TreeNode* node = que.front();
                que.pop();
                if(i == 0) result = node->val;
                if(node->left) que.push(node->left);
                if(node->right) que.push(node->right);
            }
        }
        return result;
    }
};


// 递归
// class Solution {
// public:
//     int result;
//     int maxD = INT_MIN;
//     void traversal(TreeNode* node, int depth){
//         if(node->left == NULL && node->right == NULL){
//             if (depth > maxD){
//                 maxD = depth;
//                 result = node->val;
//             }
//         }

//         if(node->left) traversal(node->left, depth + 1);
//         if(node->right) traversal(node->right, depth + 1);
//         return;
//     }

//     int findBottomLeftValue(TreeNode* root) {
//         traversal(root, 0);
//         return result;
//     }
// };

int main (){
    return 0;
}