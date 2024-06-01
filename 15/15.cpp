//  Created by Yuang Du on 2024/05/28.
//  Lc 15. 三数之和

#include "lc.h"

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        for (int a = 0; a < nums.size(); a++){
            if (nums[a] > 0) return result;
            if (a > 0 && nums[a] == nums[a - 1]) continue;
            int b = a + 1, c = nums.size() - 1;
            while (c > b){
            if (nums[a] + nums[b] + nums[c] > 0) c--;
            else if (nums[a] + nums[b] + nums[c] < 0) b++;
            else{
                result.push_back(vector<int>{nums[a], nums[b], nums[c]});
                while (c > b && nums[c] == nums[c - 1]) c--;
                while (c > b && nums[b] == nums[b + 1]) b++;
                c--;
                b++;
                }
            }
        }
        return result;
    }
};

int main(){
    return 0;
}