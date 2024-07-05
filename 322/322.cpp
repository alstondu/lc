//  Created by Yuang Du on 2024/07/2.
//  322. 零钱兑换

#include "lc.h"

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount + 1, amount + 1);
        dp[0] = 0;
        for (int i = 0; i < coins.size(); i++){
            for (int j = coins[i]; j <= amount; j++){
                dp[j] = min(dp[j], dp[j - coins[i]] + 1);
            }
        }
        if (dp[amount] > amount) return -1;
        return dp[amount];
    }
};

int main(){
    return 0;
}