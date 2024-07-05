//  Created by Yuang Du on 2024/07/1.
//  km52. 完全背包

#include "lc.h"

int fullBag(vector<int> weight, vector<int> value, int V){
    vector<int> dp(V + 1, 0);
    for (int i = 0; i < weight.size(); i++){
        for (int j = weight[i]; j <= V; j++){
            dp[j] = max(dp[j], dp[j - weight[i]] + value[i]);
        }
    }
    return dp[V];
}

int main(){
    int N, V;
    cin >> N >> V;
    vector<int> weight(N, 0);
    vector<int> value(N, 0);
    for (int i = 0; i < N; i++){
        int w, v;
        cin >> w >> v;
        weight[i] = w;
        // cout << 'w' << i << '=' << weight[i] <<endl;
        value[i] = v;
    }
    cout << fullBag(weight, value, V) << endl;
    return 0;
}