//  Created by Yuang Du on 2024/06/1.
//  20. 有效的括号 

#include "lc.h"

class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        if (s.size() % 2 != 0) return false;
        for (int i = 0; i < s.size(); i++){
            if (s[i] == '(') stack.push(')');
            else if (s[i] == '[') stack.push(']');
            else if (s[i] == '{') stack.push('}');
            else if (stack.empty() || s[i] != stack.top()) return false;
            else stack.pop();
        }
        return stack.empty();
    }
};

int main(){
    return 0;
} 