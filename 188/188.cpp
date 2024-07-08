//  Created by Yuang Du on 2024/07/05.
//  188.买卖股票的最佳时机IV

#include "lc.h"

// for (int j = 1; j < 2k + 1; j += 2)

class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        if (prices.size() == 0) return 0;
        vector<vector<int>> dp(prices.size(), vector<int> (2 * k + 1, 0));
        for (int i = 1; i <= k; i++) dp[0][2 * i - 1] = -prices[0];
        for (int i = 1; i < prices.size(); i++){
            for (int j = 1; j <= k; j++){
                dp[i][2 * j - 1] = max(dp[i - 1][2 * j - 1], dp[i - 1][2 * j - 2] - prices[i]);
                dp[i][2 * j] = max(dp[i - 1][2 * j], dp[i - 1][2 * j - 1] + prices[i]);
            }
        }
        return dp[prices.size() - 1][2 * k];
    }
};

int main(){
    return 0;
} 