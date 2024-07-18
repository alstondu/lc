//  Created by Yuang Du on 2024/07/15.
//  km100. 岛屿的最大面积

#include "lc.h"

int dir[4][2] = {0, 1, 1, 0, 0, -1, -1, 0};
int Is;

// dfs
void dfs(const vector<vector<int>>& grid, vector<vector<bool>>& visited, int x, int y){
    for (int i = 0; i < 4; i++){
        int nextx = x + dir[i][0];
        int nexty = y + dir[i][1];
        if (nextx < 0 || nextx >= grid.size() || nexty < 0 || nexty >= grid[0].size()) continue;
        if (!visited[nextx][nexty] && grid[nextx][nexty] == 1){
            Is++;
            visited[nextx][nexty] = true;
            dfs(grid, visited, nextx, nexty);  
        }
    }
}

// // bfs
// void bfs(const vector<vector<int>>& grid, vector<vector<bool>>& visited, int x, int y){
//     queue<pair<int, int>> que;
//     que.push({x, y});
//     visited[x][y] = true;
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
//                 Is++;
//                 que.push({nextx, nexty});
//             }
//         }
//     }
// }

int main(){
    int maxIs = 0;
    int n, m;
    cin >> n >> m;
    vector<vector<int>> grid(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> grid[i][j];
        }
    }
    
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (!visited[i][j] && grid[i][j] == 1){
                Is = 1;
                visited[i][j] = true;
                // dfs(grid, visited, i, j);
                dfs(grid, visited, i, j);
                maxIs = max(maxIs, Is);
            }
        }
    }
    
    cout << maxIs << endl;
    return 0;
}