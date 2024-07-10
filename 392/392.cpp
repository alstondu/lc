//  Created by Yuang Du on 2024/07/08.
//  392. 判断子序列

#include "lc.h"

class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s.size() > t.size()) return false;
        vector<vector<int>> dp(s.size() + 1, vector<int>(t.size() + 1, 0));
        for (int i = 1; i <= s.size(); i++){
            for (int j = 1; j <= t.size(); j++){
                if (s[i - 1] == t[j - 1]) dp[i][j] = dp[i - 1][j - 1] + 1;
                else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
        if (dp[s.size()][t.size()] == s.size()) return true;
        else return false;
    }
};

int main(){
    return 0;
} 