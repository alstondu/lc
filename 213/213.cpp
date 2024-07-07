//  Created by Yuang Du on 2024/07/03.
//  213. 打家劫舍II

#include "lc.h"

class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        if (nums.size() == 1) return nums[0];
        int result1 = robI(nums, 0, nums.size() - 2);
        int result2 = robI(nums, 1, nums.size() - 1);
        return max(result1, result2);
    }
    int robI(vector<int>& nums, int start, int end){
        vector<int> dp(nums.size() + 1, 0);
        dp[start] = nums[start];
        dp[start + 1] = max(nums[start], nums[start + 1]);
        for (int i = start + 2; i <= end; i++){
            dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
        }
        return dp[end];
    }
};

int main(){
    return 0;
} 