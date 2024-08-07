//  Created by Yuang Du on 2024/07/04.
//  123. 买卖股票的最佳时机III

#include "lc.h"

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() == 0) return 0;
        vector<vector<int>> dp(prices.size(), vector<int>(5, 0));
        dp[0][1] = - prices[0];
        dp[0][3] = -prices[0];
        for (int i = 1; i < prices.size(); i++){
            dp[i][1] = max(dp[i - 1][1], -prices[i]);
            dp[i][2] = max(dp[i - 1][2], dp[i - 1][1] + prices[i]);
            dp[i][3] = max(dp[i - 1][3], dp[i - 1][2] - prices[i]);
            dp[i][4] = max(dp[i - 1][4], dp[i - 1][3] + prices[i]);
        } 
        return dp[prices.size() - 1][4];
    }
};

int main(){
    return 0;
} 