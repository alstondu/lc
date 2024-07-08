//  Created by Yuang Du on 2024/07/05.
//  309.最佳买卖股票时机含冷冻期

#include "lc.h"

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() == 0) return 0;
        vector<vector<int>> dp(prices.size(), vector<int>(2, 0));
        dp[0][0] = -prices[0];
        dp[0][1] = 0;
        for (int i = 1; i < prices.size(); i++){
            if (i < 2) dp[i][0] = max(dp[i - 1][0], - prices[i]);
            else dp[i][0] = max(dp[i - 1][0], dp[i - 2][1] - prices[i]);
            
            dp[i][1] = max(dp[i - 1][1], dp[i - 1][0] + prices[i]);
        }
        return dp[prices.size() - 1][1];
    }
};

int main(){
    return 0;
} 