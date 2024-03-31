// Practice 1
// 2024/03/31

#include<iostream>
#include<vector>
#include <unordered_set>
using namespace std;

class Solution1{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2){
        unordered_set<int> result_set;
        unordered_set<int> nums1_set(nums1.begin(), nums1.end());
        for (int num : nums2){
            if (nums1_set.find(num) != nums1_set.end()){
                result_set.insert(num);
            }
        }
        return vector<int>(result_set.begin(),result_set.end());
    }
};

class Solution2{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2){
        unordered_set<int> result_set;
        int hash[1005] = {0};
        for (int num : nums1){
            hash[num] = 1;
        }
        for (int num : nums2){
            if(hash[num] == 1){
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
    for (int num : result1){
        cout << num << endl;
    }
    return 0;
}

