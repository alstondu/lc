//  Created by Yuang Du on 2024/06/26.
//  746. 使用最小花费爬楼梯

#include "lc.h"

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        // vector<int> dp(cost.size() + 1);
        // dp[0] = 0;
        // dp[1] = 0;
        // for (int i = 2; i <= cost.size(); i++){
        //     dp[i] = min(dp[i - 1] + cost[i - 1], dp[i - 2] + cost[i - 2]);
        // }
        // return dp[dp.size() - 1];

        // Maintaing less
        int dp[2];
        dp[0] = 0;
        dp[1] = 0;
        for(int i = 2; i <= cost.size(); i++){
            int sum = min(dp[1] + cost[i - 1], dp[0] + cost[i - 2]);
            dp[0] = dp[1];
            dp[1] = sum;
        }
        return dp[1];
    }
};

int main(){
    return 0;
}
