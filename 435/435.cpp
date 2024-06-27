//  Created by Yuang Du on 2024/06/24.
//  435. 无重叠区间

#include "lc.h"

class Solution {
public:
    static bool cmp(vector<int> a, vector<int> b){
        return a[0] < b[0];
    }

    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if (intervals.size() == 0) return 0;
        int count = 0;
        for (int i = 1; i < intervals.size(); i++){
            if (intervals[i][0] < intervals[i - 1][1]){
                count++;
                intervals[i][1] = min(intervals[i][1], intervals[i - 1][1]);
            }
        }
        return count;
    }
};

int main(){
    return 0;
}
