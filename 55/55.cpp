//  Created by Yuang Du on 2024/06/21.
//  55. 跳跃游戏

#include "lc.h"

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int cover = 0;
        for (int i = 0; i <= cover; i++){
            cover = max(i + nums[i], cover);
            if (cover >= nums.size() - 1) return true;
        }
        return false;
    }
};

int main(){
    return 0;
}
