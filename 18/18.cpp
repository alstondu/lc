//  Created by Yuang Du on 2024/05/28.
//  Lc 18. 四数之和

#include "lc.h"

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        for (int a = 0; a < nums.size(); a++){
            if (nums[a] > target && nums[a] >= 0) break;
            if (a > 0 && nums[a] == nums[a - 1]) continue;
            for (int b = a + 1; b < nums.size(); b++){
                if (nums[a] + nums[b] > target && nums[a] + nums[b] >= 0) break;
                if (b > a + 1 && nums[b] == nums[b - 1]) continue;
                int c = b + 1, d = nums.size() - 1;
                while(c < d){
                    if ((long) nums[a] + nums[b] + nums[c] + nums[d] > target) d--;
                    else if ((long) nums[a] + nums[b] + nums[c] + nums[d] < target) c++;
                    else {
                        result.push_back(vector<int>{nums[a], nums[b], nums[c], nums[d]});
                        while (c < d && nums[d] == nums[d - 1]) d--;
                        while (c < d && nums[c] == nums[c + 1]) c++;
                        d--;
                        c++;
                    }
                }
            }
        }
        return result;
    }
};

int main(){
    return 0;
}