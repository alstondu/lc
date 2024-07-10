//  Created by Yuang Du on 2024/06/20.
//  Added Dynamic Planning solution on 2024/07/08.
//  53. 最大子序和

#include "lc.h"

// // 贪心
// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int result = INT32_MIN;
//         int count = 0;
//         for (int i = 0; i < nums.size(); i++){
//             count += nums[i];
//             if (count > result) result = count;
//             if(count <= 0) count = 0;
//         }
//         return result;
//     }
// };

// 动态规划
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int result = nums[0];
        vector<int> dp(nums.size(), 0);
        dp[0] = nums[0];
        for (int i = 1; i < nums.size(); i++){
            dp[i] = max(dp[i], dp[i - 1] + nums[i]);
            if (dp[i] > result) result = dp[i];
        }
        return result;
    }
};

int main(){
    return 0;
}
