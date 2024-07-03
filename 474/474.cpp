//  Created by Yuang Du on 2024/06/29.
//  474. 一和零

#include "lc.h"

class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
        for (string str : strs){
            int x = 0, y = 0;
            for (char c : str){
                if (c == '0') x++;
                else y++;
            } 
            for (int i = m; i >= x; i--){
                for (int j = n; j >= y; j--){
                    dp[i][j] = max(dp[i - x][j - y] + 1, dp[i][j]);
                }
            }
        }
        return dp[m][n];
    }
};

int main(){
    return 0;
} 