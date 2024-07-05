//  Created by Yuang Du on 2024/07/2.
//  139. 单词拆分

#include "lc.h"

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<bool> dp(s.size() + 1, false);
        dp[0] = true;

        unordered_set<string> wordDictSet(wordDict.begin(), wordDict.end());

        for (int i = 1; i <= s.size(); i++){
            for (int j = 0; j < i; j++){
                if (dp[j] && wordDictSet.find(s.substr(j, i - j)) != wordDictSet.end()){
                    dp[i] = true;
                    break;
                }     
            }
        }
        return dp[s.size()];
    }
};

int main(){
    return 0;
}