//  Created by Yuang Du on 2024/06/21.
//  45. 跳跃游戏 II

#include "lc.h"

class Solution {
public:
    int jump(vector<int>& nums) {
        int curCover = 0;
        int nextCover = 0;
        int cnt = 0;
        for (int i = 0; i < nums.size() - 1; i++){
            nextCover = max(i + nums[i], nextCover);
            if (i == curCover){
                curCover = nextCover;
                cnt++;
            }
        }
        return cnt;
    }
};

int main(){
    return 0;
}
