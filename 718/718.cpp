//  Created by Yuang Du on 2024/07/06.
//  718. 最长重复子数组

#include "lc.h"

class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() == 0 || nums2.size() == 0) return 0;
        vector<vector<int>> dp(nums1.size() + 1, vector<int>(nums2.size() + 1, 0));
        int result = 0;
        for (int i = 1; i <= nums1.size(); i++){
            for (int j = 1; j <= nums2.size(); j++){
                if (nums1[i - 1] == nums2[j - 1]) dp[i][j] = dp[i - 1][j - 1] + 1;
                if (dp[i][j] > result) result = dp[i][j];
            }
        }
        return result;
    }
};

int main(){
    return 0;
} 