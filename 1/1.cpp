//  Created by Yuang Du on 2024/05/27.
//  Lc 202. 快乐数

#include "lc.h"

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++){
            auto iter = map.find(target - nums[i]);
            if (iter != map.end()){
                return {iter->second, i};
                
            }
            else{
                map.insert(pair<int, int>(nums[i], i));
            }
        }
        return {};
    }
};

int main(){
    return 0;
}