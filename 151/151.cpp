//  Created by Yuang Du on 2024/05/29.
//  Lc 151. 反转字符串中的单词

#include"lc.h"

class Solution {
public:
    void reverse(string& s, int start, int end){
        for (int i = start, j = end; i < j; i++, j--){
            swap(s[i], s[j]);
        }
    }

    void removeExtraSpaces(string& s){
        int write = 0;
        for (int read = 0; read < s.size(); read++){
            if (s[read] != ' '){
                if(write != 0) s[write++] = ' ';
                while (read < s.size() && s[read] != ' '){
                    s[write++] = s[read++];
                }
            }
        }
        s.resize(write);
    }

    string reverseWords(string s) {
        removeExtraSpaces(s);
        reverse(s, 0, s.size() - 1);
        int start = 0;
        for (int i = 0; i <= s.size(); i++) {
            if (i == s.size() || s[i] == ' ') {
                reverse(s, start, i - 1);
                start = i + 1;
            }
        }
        return s;
    }
};

int main(){
    return 0;
}