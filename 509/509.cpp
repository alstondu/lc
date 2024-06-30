//  Created by Yuang Du on 2024/06/26.
//  509. 斐波那契数 

#include "lc.h"

// // Solution 1:
// class Solution {
// public:
//     int fib(int n) {
//         int dp[2];
//         dp[0] = 0;
//         dp[1] = 1;
//         for (int i = 2; i <= n; i++){
//             int sum = dp[0] + dp[1];
//             dp[0] = dp[1];
//             dp[1] = sum;
//         }
//         return dp[1];
//     }
// };

// Solution 2: 递归
class Solution {
public:
    int fib(int n) {
        if (n < 2) return n;
        return fib(n -1) + fib(n - 2);
    }
};

int main(){
    return 0;
}
