//  Created by Yuang Du on 2024/07/03.
//  337. 打家劫舍III

#include "lc.h"

class Solution {
public:
    vector<int> robTree(TreeNode* cur){
        if (cur == NULL) return vector<int>{0, 0};
        vector<int> left = robTree(cur->left);
        vector<int> right = robTree(cur->right);

        int dp0 = max(left[0], left[1]) + max(right[0], right[1]);
        int dp1 = cur->val + left[0] + right[0];
        return vector<int>{dp0, dp1};
    }
    int rob(TreeNode* root) {
        vector<int> dp = robTree(root);
        return max(dp[0], dp[1]);
    }
};

int main(){
    return 0;
} 