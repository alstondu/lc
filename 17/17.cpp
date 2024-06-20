//  Created by Yuang Du on 2024/06/15.
//  17. 电话号码的字母组合

#include "lc.h"

class Solution {
public:
    const string letterMap[10]{
        "",
        "",
        "abc",
        "def",
        "ghi",
        "jkl",
        "mno",
        "pqrs",
        "tuv",
        "wxyz"
    };
    string s;
    vector<string> result;
    void backTracking(const string& digits, int idx){
        if (idx == digits.size()){
            result.push_back(s);
            return;
        }
        int digit = digits[idx] - '0';
        string letters = letterMap[digit];
        for (int i = 0; i < letters.size(); i++){
            s.push_back(letters[i]);
            backTracking(digits, idx + 1);
            s.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        if (digits.size() == 0) {
            return result;
        }
        backTracking(digits, 0);
        return result;
    }
};

int main(){
    return 0;
}