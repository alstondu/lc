//  Created by Yuang Du on 2024/05/29.
//  km55. 右旋字符串

#include "lc.h"

class Solution {
public:
    void reverse(string& s, int start, int end){
        for (int i = start, j = end; i < j; i++, j--){
            swap(s[i], s[j]);
        }
    }

    string rotateStr(string s, int k) {
        reverse(s, 0, s.size() - 1);
        reverse(s, 0, k);
        reverse(s, k, s.size() - 1);
        return s;
    }
};

int main(){
    string s = "abcdefg";
    Solution solution;
    cout << solution.rotateStr(s, 2) << endl;
    return 0;
}