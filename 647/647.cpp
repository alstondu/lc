//  Created by Yuang Du on 2024/07/10.
//  647.回文子串

#include "lc.h"

class Solution {
public:
    int countSubstrings(string s) {
        vector<vector<bool>> dp(s.size(), vector<bool>(s.size(), false));
        if (s.size() <= 1) return true;
        int result = 0;
        for (int i = s.size() - 1; i >= 0; i--){
            for (int j = i; j < s.size(); j++){
                if (s[i] == s[j] && (j - i <=1 || dp[i + 1][j - 1])){
                    result++;
                    dp[i][j] = true;
                }
            }
        }
        return result;
    }
};

int main(){
    return 0;
} 