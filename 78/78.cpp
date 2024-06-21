//  Created by Yuang Du on 2024/06/18.
//  78. 子集

#include "lc.h"

class Solution {
public:
    vector<int> path;
    vector<vector<int>> result;
    void backTracking(vector<int>& nums, int startIdx){
        result.push_back(path);
        if (startIdx >= nums.size()) return;
        for (int i = startIdx; i< nums.size(); i++){
            path.push_back(nums[i]);
            backTracking(nums, i + 1);
            path.pop_back();
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        backTracking(nums, 0);
        return result;
    }
};

int main(){
    return 0;
}
