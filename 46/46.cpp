//  Created by Yuang Du on 2024/06/19.
//  46. 全排列

#include "lc.h"

class Solution {
public:
    vector<int> path;
    vector<vector<int>> result;
    void backTracking(vector<int>& nums, vector<bool>& used){
        if (path.size() == nums.size()) result.push_back(path);
        for (int i = 0; i < nums.size(); i++){
            if (used[i] == true) continue;
            used[i] = true;
            path.push_back(nums[i]);
            backTracking(nums, used);
            path.pop_back();
            used[i] = false;
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool> used(nums.size(), false);
        sort(nums.begin(), nums.end());
        backTracking(nums, used);
        return result;
    }
};

int main(){
    return 0;
}
