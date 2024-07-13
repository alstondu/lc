//  Created by Yuang Du on 2024/07/11.
//  496.下一个更大元素 I 

#include "lc.h"

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result(nums1.size(), -1);
        if (nums1.size() == 0) return result;
        stack<int> st;

        unordered_map<int, int> umap(nums1.size());
        for (int i = 0; i < nums1.size(); i++){
            umap[nums1[i]] = i;
        }

        for (int i = 0; i < nums2.size(); i++){
            while (!st.empty() && nums2[i] > st.top() && umap.count(st.top()) != 0){
                result[umap[st.top()]] = nums2[i];
                st.pop();
            }
            st.push(nums2[i]);
        }
        return result;
    }
};

int main(){
    return 0;
} 