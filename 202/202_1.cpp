// Practice 1
// 2024/03/31

#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

class Solution{
public:
    int getSum(int n){
        int sum = 0;
        while (n){
            sum += (n % 10) * (n % 10);
            n /= 10;
        }
        return sum;
    }

    bool isHappy(int n){
        int sum = 0;
        unordered_set<int> sum_set;
        while(1){
            sum = getSum(n);
            if(sum == 1){
                return true;
            }
            else if (sum_set.find(sum) != sum_set.end()){
                return false;
            }
            else{
                sum_set.insert(sum);
            }
            n = sum;
        }
    }
};

int main(){
    Solution solution;
    cout<< "the number is happy: " << solution.isHappy(19) << endl;
    return 0;
}