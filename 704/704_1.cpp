// Practice 1
// 2024/03/25

#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
    int search(vector<int>& nums, int val){
        int left = 0;
        int right = nums.size() - 1;
        while(left <= right){
            int middle = (left + right)/2;
            if (nums[middle] < val){
                left = middle + 1;
            }
            else if (nums[middle] > val){
                right = middle - 1;
            }
            else{
                return middle;
            }
        }
        return -1;
    }
};

int main(){
    vector <int> nums = {-1, 0, 3, 5, 9, 12};
    int val = 9;
    Solution solution;
    cout << "Solution = " << solution.search(nums, val) << endl;
    return 0;
}
