//  Created by Yuang Du on 2024/07/12.
//  42. 接雨水

#include "lc.h"

class Solution {
public:
    int trap(vector<int>& height) {
        if (height.size() <= 2) return 0;
        stack<int> st;
        int result = 0;
        for (int i = 0; i < height.size(); i++){
            while (!st.empty() && height[i] > height[st.top()]){
                int cur = st.top();
                st.pop();
                if (!st.empty()) {
                    int h = min(height[i], height[st.top()]) - height[cur];
                    int w = i - st.top() - 1;
                    result += h * w;
                }
            }
            st.push(i);
        }
        return result;
    }
};

int main(){
    return 0;
} 