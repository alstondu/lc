//  Created by Yuang Du on 2024/06/25.
//  56. 合并区间

#include "lc.h"

class Solution {
public:
    static bool cmp(vector<int> a, vector<int> b){
        return a[0] < b[0];
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> result;
        if (intervals.size() == 0) return result;
        sort(intervals.begin(), intervals.end(), cmp);
        for (int i = 1; i < intervals.size(); i++){
            if (intervals[i][0] <= intervals[i - 1][1]){
                intervals[i][0] = intervals[i - 1][0];
            }
            else result.push_back(intervals[i - 1]);
        }
        result.push_back(intervals[intervals.size() - 1]);
        return result;
    }
};

int main(){
    return 0;
}
