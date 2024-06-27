//  Created by Yuang Du on 2024/06/24.
//  452. 用最少数量的箭引爆气球

#include "lc.h"

class Solution {
public:
    static bool cmp(vector<int> a, vector<int> b){
        return a[0] < b[0];
    }

    int findMinArrowShots(vector<vector<int>>& points) {
        if (points.size() == 0) return 0;
        sort(points.begin(), points.end(), cmp);

        int count = 1;
        for (int i = 1; i < points.size(); i++){
            if (points[i][0] <= points[i - 1][1]){
                points[i][1] = min(points[i][1], points[i - 1][1]);
            }
            else count++;
        }
        return count;
    }
};

int main(){
    return 0;
}
