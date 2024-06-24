//  Created by Yuang Du on 2024/06/20.
//  53. 最大子序和

#include "lc.h"

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int result = INT32_MIN;
        int count = 0;
        for (int i = 0; i < nums.size(); i++){
            count += nums[i];
            if (count > result) result = count;
            if(count <= 0) count = 0;
        }
        return result;
    }
};

int main(){
    return 0;
}
