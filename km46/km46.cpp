//  Created by Yuang Du on 2024/06/28.
//  km46. 0-1背包

#include "lc.h"

// 2D Solution:

// n: number of items
// bagweight: weight capacity of the bag
int n, bagweight;

// void solve(){
//     vector<int> weight(n, 0);
//     vector<int> value(n, 0);
    
//     // Input weight and value of the items
//     for (int i = 0; i < n; i++){
//         cin >> weight[i];
//     }
//     for (int j = 0; j < n; j++){
//         cin >> value[j];
//     }
    
//     // Initialize the first row
//     vector<vector<int>> dp(n, vector<int>(bagweight + 1, 0));
//     for (int j = weight[0]; j < bagweight + 1; j++){
//         dp[0][j] = value[0];
//     }
    
//     for (int i = 1; i < n; i++){
//         for (int j = 1; j < bagweight + 1; j++){
//             if (j < weight[i]) dp[i][j] = dp[i - 1][j];
//             else dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - weight[i]] + value[i]); 
//         }
//     }
    
//     cout << dp[n - 1][bagweight] << endl;
// }

// 1D Solution:
void solve() {
    vector<int> weight(n, 0);
    vector<int> value(n, 0);

    for (int i = 0; i < n; i++) {
        cin >> weight[i];
    }
    for (int j = 0; j < n; j++) {
        cin >> value[j];
    }

    // Initialize dp array to 0
    vector<int> dp(bagweight + 1, 0);

    // Iterate through items
    for (int i = 0; i < n; ++i) {
        // iterate through bagweight, from back to front
        for (int j = bagweight; j >= value[i]; j--) {
            dp[j] = max(dp[j], dp[j - weight[i]] + value[i]);
        }
    }

    // result
    cout << dp[bagweight] << endl;
}

int main(){
    while(cin >> n >> bagweight){
        solve();
    }
    return 0;
}
