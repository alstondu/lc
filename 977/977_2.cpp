// Practice 2
// 2024/5/23

#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
        vector<int> sortedSquares(vector<int>& nums){
            int k = nums.size() - 1;
            vector<int> result(nums.size(), 0);
            for (int i = 0, j = nums.size() - 1; i <= j; k--){
                if (nums[i] * nums[i] <= nums[j] * nums[j]){
                    result[k] = nums[j] * nums[j];
                    j--;
                }
                else{
                    result[k] = nums[i] * nums[i];
                    i++;
                }
            }
            return result;
        }
};

int main(){
    vector<int> nums = {-4,-1,0,3,10};
    Solution solution;
    vector<int> result = solution.sortedSquares(nums);

    for (int i = 0; i < result.size(); i++){
        cout << result[i] << endl;
    }

    return 0;
}
