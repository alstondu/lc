//  Created by Yuang Du on 2024/07/1.
//  km57. 爬楼梯进阶

#include "lc.h"

int climbStairs(int n, int m){
    vector<int> steps(m, 0);
    for(int i = 0; i < m; i++){
        steps[i] = i + 1;
    } 
    
    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    for (int j = 0; j <= n; j++){
        for (int i = 0; i < steps.size(); i++){
            if (j - steps[i] >= 0) dp[j] = dp[j] + dp[j - steps[i]];
        }
    }
    return dp[n];
}

int main(){
    int n, m;
    cin >> n >> m;
    cout << climbStairs(n, m) << endl;
    return 0;
}