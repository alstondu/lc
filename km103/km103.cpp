//  Created by Yuang Du on 2024/07/16.
//  km103. 水流问题

#include "lc.h"

int dir[4][2] = {0, 1, 1, 0, 0, -1, -1, 0};

void dfs(const vector<vector<int>>& grid, vector<vector<bool>>& visited, int x, int y){
    visited[x][y] = true;
    
    for(int i = 0; i < 4; i++){
        int nextx = x + dir[i][0];
        int nexty = y + dir[i][1];
        if (nextx < 0 || nextx >= grid.size() || nexty < 0 || nexty >= grid[0].size()) continue;
        if (!visited[nextx][nexty] && grid[x][y] <= grid[nextx][nexty]) dfs(grid, visited, nextx, nexty);
    }
    
}

int main(){
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> grid(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> grid[i][j];
        }
    }
    
    vector<vector<bool>> firstBoarder(n, vector<bool>(m, false));
    vector<vector<bool>> secondBoarder(n, vector<bool>(m, false));
    
    for (int i = 0; i < n; i++){
        dfs(grid, firstBoarder, i, 0);
        dfs(grid, secondBoarder, i, m - 1);
    }
    

    for (int j = 0; j < m; j++){
        dfs(grid, firstBoarder, 0, j);
        dfs(grid, secondBoarder, n - 1, j);
    }
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (firstBoarder[i][j] && secondBoarder[i][j]) cout << i << ' ' << j << endl;
        }
    }
    return 0;
}