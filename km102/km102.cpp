//  Created by Yuang Du on 2024/07/16.
//  km102. 沉没孤岛

#include "lc.h"

int dir[4][2] = {0, 1, 1, 0, 0, -1, -1, 0};
// dfs
void dfs(const vector<vector<int>>& grid, vector<vector<bool>>& visited, vector<vector<int>>& result, int x, int y){
    result[x][y] = 1;
    visited[x][y] = true;
    for (int i = 0; i < 4; i++){
        int nextx = x + dir[i][0];
        int nexty = y + dir[i][1];
        if (nextx < 0 || nextx >= grid.size() || nexty < 0 || nexty >=grid[0].size()) continue;
        if (!visited[nextx][nexty] && grid[nextx][nexty] == 1) dfs(grid, visited, result, nextx, nexty);
    }    
}

// // bfs
// void bfs(const vector<vector<int>>& grid, vector<vector<bool>>& visited, vector<vector<int>>& result, int x, int y){
//     queue<pair<int, int>> que;
//     que.push({x, y});
//     visited[x][y] = true;
//     result[x][y] = 1; 
//     while(!que.empty()){
//         pair<int, int> cur = que.front();
//         que.pop();
//         int curx = cur.first;
//         int cury = cur.second;
//         for (int i = 0; i < 4; i++){
//             int nextx = curx + dir[i][0];
//             int nexty = cury + dir[i][1];
//             if (nextx < 0 || nextx >= grid.size() || nexty < 0 || nexty >= grid[0].size()) continue;
//             if (!visited[nextx][nexty] && grid[nextx][nexty] == 1){
//                 visited[nextx][nexty] = true;
//                 result[nextx][nexty] = 1;
//                 que.push({nextx, nexty});
//             }
//         }
//     }
// }

// // dfs no extra grid
// void dfs(vector<vector<int>>& grid, vector<vector<bool>>& visited, int x, int y){
//     grid[x][y] = 2;
//     visited[x][y] = true;
//     for (int i = 0; i < 4; i++){
//         int nextx = x + dir[i][0];
//         int nexty = y + dir[i][1];
//         if (nextx < 0 || nextx >= grid.size() || nexty < 0 || nexty >=grid[0].size()) continue;
//         if (!visited[nextx][nexty] && grid[nextx][nexty] == 1) dfs(grid, visited, nextx, nexty);
//     }    
// }

int main(){
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> grid(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> grid[i][j];
        }
    }
    
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    vector<vector<int>> result(n, vector<int>(m, 0));
    for(int i = 0; i < n; i++){
        if (!visited[i][0] && grid[i][0] == 1) dfs(grid, visited, result, i, 0);
        if (!visited[i][m - 1]&& grid[i][m - 1] == 1) dfs(grid, visited, result, i, m - 1);
        // // without extra grid
        // if (!visited[i][0] && grid[i][0] == 1) dfs(grid, visited, i, 0);
        // if (!visited[i][m - 1]&& grid[i][m - 1] == 1) dfs(grid, visited, i, m - 1);
    }
    
    for (int j = 0; j < m; j++){
        if (!visited[0][j] && grid[0][j] == 1) dfs(grid, visited, result, 0, j);
        if (!visited[n - 1][j]&& grid[n - 1][j] == 1) dfs(grid, visited, result, n - 1, j);
        // // without extra grid
        // if (!visited[0][j] && grid[0][j] == 1) dfs(grid, visited, 0, j);
        // if (!visited[n - 1][j]&& grid[n - 1][j] == 1) dfs(grid, visited, n - 1, j);
    }
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << result[i][j] << ' ';
        }
        cout << endl;
    }

    // // without extra grid
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < m; j++){
    //         // order matters
    //         if (grid[i][j] == 1) grid[i][j] = 0;
    //         if (grid[i][j] == 2) grid[i][j] = 1;
    //     }
    // }
    
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < m; j++){
    //         cout << grid[i][j] << ' ';
    //     }
    //     cout << endl;
    // }
    
    return 0;
}