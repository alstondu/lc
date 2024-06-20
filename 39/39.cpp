//  Created by Yuang Du on 2024/06/16.
//  39. 组合总和

#include "lc.h"

class Solution {
public:
    vector<int> path;
    vector<vector<int>> result;
    void backTracking(vector<int>& candidates, int target, int sum, int startIdx){
        if (sum > target) return;
        if (sum == target){
            result.push_back(path);
            return;
        }

        for (int i = startIdx; i < candidates.size(); i++){
            sum += candidates[i];
            path.push_back(candidates[i]);
            backTracking(candidates, target, sum, i);
            sum -= candidates[i];
            path.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        backTracking(candidates, target, 0, 0);
        return result;
    }
};

int main(){
    return 0;
}