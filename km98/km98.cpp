//  Created by Yuang Du on 2024/07/13.
//  km98. 所有可达路径

#include "lc.h"

vector<vector<int>> result;
vector<int> path;

// // 邻接矩阵
// void dfs(vector<vector<int>> graph, int x, int n){
//     if (x == n) {
//         result.push_back(path);
//         return;
//     }
//     for (int i = 1; i <= n; i++){
//         if (graph[x][i] == 1){
//             path.push_back(i);
//             dfs(graph, i, n);
//             path.pop_back();
//         }
//     }
// }

// 邻接表
void dfs(vector<list<int>> graph, int x, int n){
    if (x == n){
        result.push_back(path);
        return;
    }
    for (int i : graph[x]){
        path.push_back(i);
        dfs(graph, i, n);
        path.pop_back();
    }
}

int main (){
    int N, M, s, t;
    cin >> N >> M;
    // vector<vector<int>> graph(N + 1, vector<int>(N + 1, 0));
    vector<list<int>> graph(N + 1);
    while(M--){
        cin >> s >> t;
        // graph[s][t] = 1;
        graph[s].push_back(t);
    }
    
    path.push_back(1);
    dfs(graph, 1, N);
    if (result.size() == 0) cout << -1 << endl;
    for (const vector<int> &pa : result){
        for (int i = 0; i < pa.size() - 1; i++){
            cout << pa[i] << " ";
        }
        cout << pa[pa.size() - 1] << endl;
    }
    
    return 0;
}
