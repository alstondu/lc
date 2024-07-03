//  Created by Yuang Du on 2024/06/29.
//  494. 目标和

#include "lc.h"

class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = 0;
        int count = 0;
        for (int i = 0; i < nums.size(); i++) sum += nums[i];
        if (target > sum) return 0;
        if ((sum + target) % 2 == 1) return 0;
        int pSum = (sum + target) / 2;
        vector<int> dp(pSum + 1, 0);
        dp[0] = 1;
        for (int i = 0; i < nums.size(); i++){
            for (int j = pSum; j >= nums[i]; j--){
                dp[j] = dp[j] + dp[j - nums[i]];
            }
        }
        return dp[pSum];
    }
};

int main(){
    return 0;
} 