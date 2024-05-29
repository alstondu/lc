// Practice 2
// 2024/05/27

#include "lc.h"

class Solution {
public:
    int getsum(int n){
        int sum = 0;
        while(n){
            sum += (n % 10) * (n % 10);
            n = n / 10;
        }
        return sum;
    }

    bool isHappy(int n) {
        unordered_set<int> sums;
        while (1){
            int sum = getsum(n);
            if (sum == 1) return true;
            if (sums.find(sum) != sums.end()){
                return false;
            }
            else{
                sums.insert(sum);
            }
            n = sum;
        }
    }
};

int main(){
    return 0;
}