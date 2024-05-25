// Practice 2
// 2024/05/23

#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        int minSubArrayLen(vector<int>& nums, int target){
            int result = INT32_MAX; //Define result as the maximum integer
            int i = 0; // Begining pointer of the array
            int sum = 0; // Sum of elements of the currant array
            int L = 0;  // Intemediate length of the array
            for (int j = 0; j < nums.size(); j++){
                sum += nums[j];
                while (sum >= target){
                    L = j - i + 1;
                    sum -= nums[i];
                    i++; // Move the slow pointer 1 step forward
                    result = result < L ? result: L;
                }
            }
            return result == INT32_MAX ? 0 : result; // Use ==

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