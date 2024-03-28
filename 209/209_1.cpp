// Practice 1
// 2024/03/26

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minSubArrayLen(vector<int>& nums, int s){
        int i = 0;
        int sum = 0;
        int subL = 0;
        int result = INT32_MAX;

        for(int j = 0; j < nums.size(); j++){
            sum += nums[j];
            while(sum >= s){
                subL = j - i + 1;
                result = result < subL ? result : subL;
                sum -= nums[i++];
            }
        }
        return result == INT32_MAX ? 0 : result;
    }
};

int main(){
    vector<int> nums1 = {2,3,1,2,4,3};
    vector<int> nums2 = {1,4,4};
    vector<int> nums3 = {1,1,1,1,1,1,1,1};

    Solution solution;

    cout << "Solution 1 = " << solution.minSubArrayLen(nums1, 7) << endl;
    cout << "Solution 2 = " << solution.minSubArrayLen(nums2, 4) << endl;
    cout << "Solution 3 = " << solution.minSubArrayLen(nums3, 11) << endl;
    
    return 0;
}