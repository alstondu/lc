//  Created by Yuang Du on 2024/06/21.
//  1005. K次取反后最大化的数组和

#include "lc.h"

class Solution {
public:
    static bool cmp(int a, int b){
        return abs(a) > abs(b);
    }
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        int sum = 0;
        sort(nums.begin(), nums.end(), cmp);
        for (int i = 0; i < nums.size(); i++){
            if (k > 0 && nums[i] < 0){
                k--;
                nums[i] *= -1;
            }
        }
        if (k % 2 == 1) nums[nums.size() - 1] *= -1;
        for (int i = 0; i < nums.size(); i++){
            sum += nums[i];
        }
        return sum;
    }
};

int main(){
    return 0;
}
