// Practice 2
// 2024/05/22

#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
    int removeElement(vector<int>& nums, int val){
        int write = 0;
        for(int read = 0; read < nums.size(); read++){
            if (nums[read] != val){
                nums[write] = nums[read];
                write++;
            }
        }
        return write;
    }
};

int main(){
    vector<int> nums = {1,2,3,4,5,4,3,6,7};
    Solution solution;
    int l = solution.removeElement(nums, 3);
    cout << "Solution = " << l << endl;
    for (int i = 0; i < l; i++) {
        cout << nums[i] <<endl;
    }

    return 0;
}
