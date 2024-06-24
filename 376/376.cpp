//  Created by Yuang Du on 2024/06/20.
//  376. 摆动序列

#include "lc.h"

class Solution {
public:
    int preDiff = 0;
    int curDiff = 0;
    int result = 1;
    int wiggleMaxLength(vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1; i++){
            curDiff = nums[i + 1] - nums[i];
            if ((preDiff <= 0 && curDiff > 0) || (preDiff >= 0 && curDiff < 0)){
                result++;
                preDiff = curDiff;
            }
        }
        return result;
    }
};

int main(){
    return 0;
}
