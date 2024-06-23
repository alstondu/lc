//  Created by Yuang Du on 2024/06/19.
//  491.递增子序列

#include "lc.h"

class Solution {
public:
    vector<int> path;
    vector<vector<int>> result;
    void backTracking(vector<int>& nums, int startIdx){
        if (path.size() > 1) result.push_back(path);
        unordered_set<int> uset;
        for (int i = startIdx; i < nums.size(); i++){
            if ((!path.empty() && nums[i] < path.back()) || uset.find(nums[i]) != uset.end()) continue;
            uset.insert(nums[i]);
            path.push_back(nums[i]);
            backTracking(nums, i + 1);
            path.pop_back();
        }
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        backTracking(nums, 0);
        return result;
    }
};

int main(){
    return 0;
}
