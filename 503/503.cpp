//  Created by Yuang Du on 2024/07/11.
//  503.下一个更大元素II

#include "lc.h"

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> result(nums.size(), -1);
        if (nums.size() == 0) return result;
        stack<int> st;

        for (int i = 0; i < nums.size() * 2; i++){
            while (!st.empty() && nums[i % nums.size()] > nums[st.top()]){
                result[st.top()] = nums[i % nums.size()];
                st.pop();
            }
            st.push(i % nums.size());
        }
        return result;
    }  
};

int main(){
    return 0;
} 