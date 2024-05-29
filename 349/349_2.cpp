// Practice 2
// 2024/05/27

#include "utils.h"


class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> result_set;
        unordered_set<int> num_set(nums1.begin(), nums1.end());
        for(int num : nums2){
            if (num_set.find(num) != num_set.end()){
                result_set.insert(num);
            }
        }
        return vector<int> (result_set.begin(), result_set.end());
    }
};

int main(){
    return 0;
}