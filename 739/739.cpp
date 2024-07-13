//  Created by Yuang Du on 2024/07/11.
//  739.每日温度

#include "lc.h"

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result(temperatures.size(), 0);
        stack<int> st;
        for (int i = 0; i < temperatures.size(); i++){
            while (!st.empty() && temperatures[i] > temperatures[st.top()]){
                result[st.top()] = i - st.top();
                st.pop();
            }
            st.push(i);
        }
        return result;
    }
};

int main(){
    return 0;
} 