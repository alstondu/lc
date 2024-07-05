//  Created by Yuang Du on 2024/07/1.
//  518. 零钱兑换 II

#include "lc.h"

class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<int> dp(amount + 1, 0);
        dp[0] = 1;
        for (int i = 0; i < coins.size(); i++){
            for (int j = coins[i]; j <= amount; j++){
                dp[j] = dp[j] + dp[j - coins[i]];
            }
        }
        return dp[amount];
    }
};

int main(){
    return 0;
}