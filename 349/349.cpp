//  Created by Yuang Du on 2024/3/30.
//  Lc 349. 两个数组的交集

#include<iostream>
#include<vector>
#include <unordered_set>
using namespace std;

// Using set
class Solution1 {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> result_set; // 存放结果，之所以用set是为了给结果集去重
        unordered_set<int> nums_set(nums1.begin(), nums1.end());
        for (int num : nums2) {
            // 发现nums2的元素 在nums_set里又出现过
            if (nums_set.find(num) != nums_set.end()) {
                result_set.insert(num);
            }
        }
        return vector<int>(result_set.begin(), result_set.end());
    }
};

// Using array

class Solution2 {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> result_set; // 存放结果，之所以用set是为了给结果集去重
        int hash[1005] = {0}; // 默认数值为0
        for (int num : nums1) { // nums1中出现的字母在hash数组中做记录
            hash[num] = 1;
        }
        for (int num : nums2) { // nums2中出现话，result记录
            if (hash[num] == 1) {
                result_set.insert(num);
            }
        }
        return vector<int>(result_set.begin(), result_set.end());
    }
};

int main(){
    vector<int> nums1 = {1,3,3,8,6,3,2,5,6,7,9};
    vector<int> nums2 = {3,5,7,5,2,7,9,};
    Solution1 solution1;
    Solution2 solution2;
    vector<int> result1 = solution1.intersection(nums1, nums2);
    vector<int> result2 = solution2.intersection(nums1, nums2);
    for (int num : result2){
        cout << num << endl;
    }
    return 0;
}
