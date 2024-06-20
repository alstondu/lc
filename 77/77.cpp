//  Created by Yuang Du on 2024/06/15.
//  77. 组合

#include "lc.h"

class Solution {
public:
    vector<int> path;
    vector<vector<int>> result;
    void backTracking(int n, int k, int startIdx){
        if (path.size() == k){
            result.push_back(path);
            return;
        }
        for (int i = startIdx; i <= n - (k - path.size()) + 1; i++){
            path.push_back(i);
            backTracking(n, k, i + 1);
            path.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        backTracking(n, k, 1);
        return result;
    }
};

int main(){
    return 0;
}