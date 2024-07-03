//  Created by Yuang Du on 2024/06/29.
//  1049. 最后一块石头的重量 II

#include "lc.h"

class Solution {
public:
    int lastStoneWeightII(vector<int>& stones) {
        int sum = 0;
        for (int i = 0; i < stones.size(); i++) sum += stones[i];
        int target = sum/2;
        vector<int> dp(target + 1, 0);
        for (int i = 0; i < stones.size(); i++){
            for (int j = target; j >= stones[i]; j--){
                dp[j] = max(dp[j], dp[j - stones[i]] + stones[i]);
            }
        }
        return sum - dp[target] - dp[target];
    }
};


int main(){
    return 0;
} 