//  Created by Yuang Du on 2024/06/1.
//  1047. 逆波兰表达式求值

#include "lc.h"

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long> st;
        for (int i = 0; i < tokens.size(); i++){
            if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/"){
                long long num1 = st.top();
                st.pop();
                long long num2 = st.top();
                st.pop(); 
                if (tokens[i] == "+") st.push(num2 + num1);
                else if (tokens[i] == "-") st.push(num2 - num1);
                else if (tokens[i] == "*") st.push(num2 * num1);
                else st.push(num2 / num1);
            }
            else st.push(stoll(tokens[i]));
        }
    return st.top();
    }
};

int main(){
    return 0;
} 
