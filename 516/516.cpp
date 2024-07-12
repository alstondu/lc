//  Created by Yuang Du on 2024/07/10.
//  516. 最长回文子序列

#include "lc.h"

class Solution {
public:
    int longestPalindromeSubseq(string s) {
        vector<vector<int>> dp(s.size(), vector<int>(s.size(), 0));
        if (s.size() <= 1) return true;
        for (int i = 0; i < s.size(); i++) dp[i][i] = 0;
        for (int i = s.size() - 1; i >= 0; i--){
            for (int j = i + 1; j < s.size(); j++){
                if (s[i] == s[j]) dp[i][j] = dp[i + 1][j - 1] + 2;
                else dp[i][j] = max(dp[i][j - 1], dp[i + 1][j]);
            }
        }
        return dp[0][s.size() - 1];
    }
};

int main(){
    return 0;
} 