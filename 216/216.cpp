//  Created by Yuang Du on 2024/06/15.
//  216. 组合总和 III

#include "lc.h"

class Solution {
public:
    vector<int> path;
    vector<vector<int>> result;
    void backTracking(int k, int n, int startIdx, int sum){
        if (sum > n) return;
        if (path.size() == k && sum == n){
            result.push_back(path);
            return;
        }
        for (int i = startIdx; i <= 9 - (k - path.size()) + 1; i++){
            path.push_back(i);
            sum += i;
            backTracking(k, n, i + 1, sum);
            path.pop_back();
            sum -= i;
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        backTracking(k, n, 1, 0);
        return result;
    }
};

int main(){
    return 0;
}