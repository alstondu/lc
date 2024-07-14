//  Created by Yuang Du on 2024/07/12.
//  84. 柱状图中最大的矩形

#include "lc.h"

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        if (heights.size() == 0) return 0;
        if (heights.size() == 1) return heights[0];
        stack<int> st;
        int result = 0;
        heights.insert(heights.begin(), 0);
        heights.push_back(0);
        for (int i = 0; i < heights.size(); i++){
            while (!st.empty() && heights[i] < heights[st.top()]){
                int cur = st.top();
                st.pop();
                if (!st.empty()){
                    int h = max(heights[i], heights[st.top()]);
                    int w = i - st.top();
                    result = max(result, h * w);
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