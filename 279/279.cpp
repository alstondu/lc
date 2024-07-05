//  Created by Yuang Du on 2024/07/2.
//  279. 完全平方数

#include "lc.h"

class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(n + 1, n);
        dp[0] = 0;
        for (int i = 1; i * i <= n; i++){
            for (int j = i * i;j <= n; j++){
                dp[j] = min(dp[j], dp[j - i*i] + 1);
            }
        }
        return dp[n];
    }
};

int main(){
    return 0;
}