//  Created by Yuang Du on 2024/06/21.
//  Added Dynamic Planning solution on 2024/07/04.
//  122.买卖股票的最佳时机II

#include "lc.h"

// // 贪心
// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int result = 0;
//         for (int i = 0; i < prices.size(); i++){
//             int curDiff = prices[i + 1] - prices[i];
//             if (curDiff > 0){
//                 result += curDiff;
//             }
//         }
//         return result;
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
            dp[i][0] = max(dp[i - 1][0], dp[i - 1][1] - prices[i]);
            dp[i][1] = max(dp[i - 1][1], dp[i - 1][0] + prices[i]);
        }
        return dp[prices.size() - 1][1];
    }
};

int main(){
    return 0;
}
