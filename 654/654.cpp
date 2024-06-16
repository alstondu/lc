//  Created by Yuang Du on 2024/06/11.
//  654. 最大二叉树

#include "lc.h"

class Solution {
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        if (nums.size() == 0) return NULL;
        int rootValue = INT_MIN;
        int idx = 0;
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] > rootValue){
                rootValue = nums[i];
                idx = i;
            }
        }
        TreeNode* root = new TreeNode(rootValue);
        if (nums.size() == 1) return root;

        if (idx > 0){
            vector<int> left(nums.begin(), nums.begin() + idx);
            root->left = constructMaximumBinaryTree(left);
        }
        if(idx < nums.size() - 1){
            vector<int> right(nums.begin() + idx + 1, nums.end());
            root->right = constructMaximumBinaryTree(right);
        }
        return root;
    }
};

int main (){
    return 0;
}