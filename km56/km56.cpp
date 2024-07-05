//  Created by Yuang Du on 2024/07/2.
//  km56. 多重背包

#include "lc.h"

int multiBag(int C, int N, vector<int> weights, vector<int> values, vector<int> nums){
    vector<int> dp(C + 1, 0);
    for (int i = 0; i < N; i++){
        for (int j = C; j >= weights[i]; j--){
            for (int k = 1; k <= nums[i] && j - k * weights[i] >= 0; k++){
                dp[j] = max(dp[j], dp[j - k * weights[i]] + k * values[i]);
            }
        }
    }
    return dp[C];
}

int main(){
    int C, N;
    cin >> C >> N;
    vector<int> weights(N, 0);
    vector<int> values(N, 0);
    vector<int> nums(N, 0);
    for (int i = 0; i < N; i++) cin >> weights[i];
    for (int i = 0; i < N; i++) cin >> values[i];
    for (int i = 0; i < N; i++) cin >> nums[i];
    cout << multiBag(C, N, weights, values, nums) << endl;
    return 0;
}