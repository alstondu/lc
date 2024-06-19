//  Created by Yuang Du on 2024/06/14.
//  108. 将有序数组转换为二叉搜索树

#include "lc.h"

class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int> nums) {
        if (nums.size() == 0) return NULL;
        int mid = nums.size()/2;
        TreeNode* node = new TreeNode(nums[mid]);
        vector<int> left(nums.begin(), nums.begin() + mid - 1);
        node->left = sortedArrayToBST(left);
        vector<int> right(nums.begin() + mid + 1, nums.end());
        node->right = sortedArrayToBST(right);
        return node;
    }
};

int main(){
    return 0;
}