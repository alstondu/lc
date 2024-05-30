//  Created by Yuang Du on 2024/05/28.
//  Lc 454. 四数相加II

#include "lc.h"

class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int, int> map;
        int cnt = 0;
        for (int a : nums1){
            for (int b : nums2){
                map[a + b]++;
            }
        }

        for (int c : nums3){
            for (int d : nums4){
                int target = 0 - (c + d);
                if (map.find(target) != map.end()){
                    cnt += map[target];
                }
            }
        }
        return cnt;
    }
};

int main(){
    return 0;
}