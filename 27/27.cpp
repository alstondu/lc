//  Created by Yuang Du on 2024/3/25.
//  lc 27. 移除数组中元素
//  双指针做法：
//  fastIndex 指向非目标元素
//  slowIndex 指向所需覆盖位置

#include <iostream>
#include <vector>
using namespace std;

// 时间复杂度：O(n)
// 空间复杂度：O(1)
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int slowIndex = 0;
        for (int fastIndex = 0; fastIndex < nums.size(); fastIndex++) {
            if (val != nums[fastIndex]) {
                nums[slowIndex++] = nums[fastIndex];
            }
        }
        return slowIndex;
    }
};

int main() {
    vector<int> nums = {1,2,3,4,5,6,7};
    Solution solution;
    cout << "solution = " <<solution.removeElement(nums, 3) << endl;
    return 0;
}
