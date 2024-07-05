//  Created by Yuang Du on 2024/07/1.
//  377. 组合总和 Ⅳ

#include "lc.h"

class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<int> dp(target + 1, 0);
        dp[0] = 1;
        for (int j = 0; j <= target; j++){
            for (int i = 0; i < nums.size(); i++){
                if (j - nums[i] >= 0) dp[j] = dp[j] + dp[j - nums[i]];
            }
        }
        return dp[target];
    }
};

int main(){
    return 0;
}