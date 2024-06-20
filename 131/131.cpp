//  Created by Yuang Du on 2024/06/16.
//  131. 分割回文串

#include "lc.h"

class Solution {
public:
    vector<string> path;
    vector<vector<string>> result;
    bool isisPalindrome(string& s, int start, int end){
        for (int i = start, j = end; i < j; i++, j--){
            if (s[i] != s[j]) return false;
        }
        return true;
    }

    void backTracking(string &s, int startIdx){
        if (startIdx >= s.size()){
            result.push_back(path);
            return;
        }
        for (int i = startIdx; i < s.size(); i++){
            if (isisPalindrome(s, startIdx, i)){
                string str = s.substr(startIdx, i - startIdx + 1);
                path.push_back(str);
            }
            else continue;
            backTracking(s, i + 1);
            path.pop_back();
        }
    }

    vector<vector<string>> partition(string s) {
        backTracking(s, 0);
        return result;
    }
};

int main(){
    return 0;
}