//  Created by Yuang Du on 2024/3/25.
//  lc 27. 移除数组中元素
//  双指针做法：
//  read 指向非目标元素
//  write 指向所需覆盖位置

#include <iostream>
#include <vector>
using namespace std;

// 时间复杂度：O(n)
// 空间复杂度：O(1)
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int write = 0;
        for (int read = 0; read < nums.size(); read++) {
            if (val != nums[read]) {
                nums[write++] = nums[read];
            }
        }
        return write;
    }
};

int main() {
    vector<int> nums = {1,2,3,4,5,6,7};
    Solution solution;
    cout << "solution = " <<solution.removeElement(nums, 3) << endl;
    return 0;
}
