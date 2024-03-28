//  Created by Yuang Du on 2024/3/26.
//  Lc 209. 长度最小的子数组

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int result = INT32_MAX;
        int sum = 0; // 滑动窗口数值之和
        int i = 0; // 滑动窗口起始位置
        int subLength = 0; // 滑动窗口的长度
        for (int j = 0; j < nums.size(); j++) {
            sum += nums[j];
            // 注意这里使用while，每次更新 i（起始位置），并不断比较子序列是否符合条件
            while (sum >= s) {
                subLength = (j - i + 1); // 取子序列的长度
                result = result < subLength ? result : subLength;
                sum -= nums[i++]; // 这里体现出滑动窗口的精髓之处，不断变更i（子序列的起始位置）
            }
        }
        // 如果result没有被赋值的话，就返回0，说明没有符合条件的子序列
        return result == INT32_MAX ? 0 : result;
    }
};

int main(){
    vector<int> nums1 = {2,3,1,2,4,3};
    vector<int> nums2 = {1,4,4};
    vector<int> nums3 = {1,1,1,1,1,1,1,1};

    Solution solution;

    cout << "Solution 1 = " << solution.minSubArrayLen(7, nums1) << endl;
    cout << "Solution 2 = " << solution.minSubArrayLen(4, nums2) << endl;
    cout << "Solution 3 = " << solution.minSubArrayLen(11, nums3) << endl;

    return 0;
}