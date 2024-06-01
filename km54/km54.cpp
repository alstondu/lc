//  Created by Yuang Du on 2024/05/29.
//  km54. 替换数字

#include "lc.h"

class Solution {
public:
    string reverseStr(string s) {
        int cnt = 0;
        for (int i = 0; i< s.size(); i++){
            if(s[i] >= '0' && s[i] <= '9'){
                cnt ++;
            }
        }
        int oldIdx = s.size() - 1;
        s.resize(s.size() + cnt * 5);
        int newIdx = s.size() - 1;
        while (oldIdx >= 0){
            if (s[oldIdx] >= '0' && s[oldIdx] <= '9'){
                s[newIdx--] = 'r';
                s[newIdx--] = 'e';
                s[newIdx--] = 'b';
                s[newIdx--] = 'm';
                s[newIdx--] = 'u';
                s[newIdx--] = 'n';
            }
            else {
                s[newIdx] = s[oldIdx];
            }

            oldIdx--;
        }
        return s;
    }
};

int main(){
    return 0;
}