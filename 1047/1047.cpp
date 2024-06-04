//  Created by Yuang Du on 2024/06/1.
//  1047. 删除字符串中的所有相邻重复项

#include "lc.h"

class Solution {
public:
    string removeDuplicates(string S) {
        stack<char> st;
        for (char s : S){
            if (st.empty() || s != st.top()) st.push(s);
            else st.pop();
        }
        string result;
        int j = st.size();
        while (!st.empty()){
            result.push_back(st.top());
            st.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};


int main(){
    return 0;
} 