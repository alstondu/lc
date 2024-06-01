//  Created by Yuang Du on 2024/05/29.
//  Lc 541. 反转字符串II

#include "lc.h"

class Solution {
public:
    string reverseStr(string s, int k) {
        for (int i = 0; i < s.size() ; i += 2 * k){
            if (i + k <= s.size() ){
                reverse(s.begin() + i, s.begin() + i + k);
            }
            else {
                reverse(s.begin() + i, s.end());
            }
        }
        return s;
    }
};

int main(){
    return 0;
}