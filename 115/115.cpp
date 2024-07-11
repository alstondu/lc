//  Created by Yuang Du on 2024/07/09.
//  115. 不同的子序列

#include "lc.h"

class Solution {
public:
    int numDistinct(string s, string t) {
        vector<vector<uint64_t>> dp(t.size() + 1, vector<uint64_t>(s.size() + 1, 0));
        for (int j = 0; j <= s.size(); j++) dp[0][j] = 1;
        for (int i = 1; i <= t.size(); i++){
            for (int j = 1; j <= s.size(); j++){
                if (s[j - 1] != t[i - 1]) dp[i][j] = dp[i][j - 1];
                else dp[i][j] = dp[i][j - 1] + dp[i - 1][j - 1];
            }
        }
        return dp[t.size()][s.size()];
    }
};

int main(){
    return 0;
} 