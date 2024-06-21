//  Created by Yuang Du on 2024/06/18.
//  90. 子集 II

#include "lc.h"

class Solution {
public:
    vector<vector<int>> result;
    vector<int> path;
    void backTracking(vector<int>& nums, int startIdx, vector<bool>& used){
        result.push_back(path);
        if (startIdx >= nums.size()) return;
        for (int i = startIdx; i < nums.size(); i++){
            if (i > 0 && nums[i] == nums[i - 1] && used[i - 1] == false) continue;
            path.push_back(nums[i]);
            used[i] = true;
            backTracking(nums, i + 1, used);
            used[i] = false;
            path.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<bool> used(nums.size(), false);
        sort(nums.begin(), nums.end());
        backTracking(nums, 0, used);
        return result;
    }
};

int main(){
    return 0;
}
