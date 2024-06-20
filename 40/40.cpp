//  Created by Yuang Du on 2024/06/16.
//  40. 组合总和 II

#include "lc.h"

class Solution {
public:
    vector<int> path;
    vector<vector<int>> result;
    void backTracking(vector<int>& candidates, int target, int sum, int startIdx, vector<bool>& used){
        if (sum > target) return;
        if (sum == target){
            result.push_back(path);
            return;
        }

        for (int i = startIdx; i < candidates.size(); i++){
            if (i > 0 && candidates[i] == candidates[i - 1] && used[i - 1] == false) continue;
            sum += candidates[i];
            used[i] = true;
            path.push_back(candidates[i]);
            backTracking(candidates, target, sum, i + 1, used);
            sum -= candidates[i];
            used[i] = false;
            path.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<bool> used(candidates.size(), false);
        sort(candidates.begin(), candidates.end());
        backTracking(candidates, target, 0, 0, used);
        return result;
    }
};

int main(){
    return 0;
}