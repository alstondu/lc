//  Created by Yuang Du on 2024/07/06.
//  674. 最长连续递增序列

#include "lc.h"

class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if (nums.size() <= 1) return nums.size();
        vector<int> dp(nums.size(), 1);
        int result = 1;
        for (int i = 1; i < nums.size(); i++){
            if (nums[i] > nums[i - 1]) dp[i] = dp[i - 1] + 1;
            if (dp[i] > result) result = dp[i];
        }
        return result;
    }
};

int main(){
    return 0;
} 