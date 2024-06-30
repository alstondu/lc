//  Created by Yuang Du on 2024/06/26.
//  70. 爬楼梯

#include "lc.h"

class Solution {
public:
    int climbStairs(int n) {
        // vector<int> dp(n + 1);
        // dp[1] = 1;
        // dp[2] = 2;
        // for (int i = 3; i <= n; i++){
        //     dp[i] = dp[i - 1] + dp[i - 2];
        // }
        // return dp[n];

        
        // Maintain only 3 value instead a entile vector:
        int dp[3];
        dp[1] = 1;
        dp[2] = 2;
        for (int i = 3; i <= n; i++){
            int sum = dp[1] + dp[2];
            dp[1] = dp[2];
            dp[2] = sum;
        }
        return dp[2];
    }
};

int main(){
    return 0;
}
