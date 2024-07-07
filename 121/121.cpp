//  Created by Yuang Du on 2024/07/04.
//  121. 买卖股票的最佳时机

#include "lc.h"

// // 非动态规划
// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int maxP = 0;
//         int cumP = 0;
//         for (int i = 1; i < prices.size(); i++){
//             cumP += prices[i] - prices[i - 1];
//             if (cumP < 0) cumP = 0;
//             maxP = max(maxP, cumP);
//         }
//         return maxP == 0 ? 0 : maxP;
//     }
// };

// 动态规划
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() == 0) return 0;
        vector<vector<int>> dp(prices.size(), vector<int>(2, 0));
        dp[0][0] = -prices[0];
        dp[0][1] = 0;

        for (int i = 1; i < prices.size(); i++){
            dp[i][0] = max(dp[i - 1][0], -prices[i]);
            dp[i][1] = max(dp[i - 1][1], dp[i - 1][0] + prices[i]);
        }
        return dp[prices.size() - 1][1];
    }
};

int main(){
    return 0;
} 