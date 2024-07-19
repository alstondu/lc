//  Created by Yuang Du on 2024/07/16.
//  km104. 建造最大岛屿

#include "lc.h"

int dir[4][2] = {0, 1, 1, 0, 0, -1, -1, 0};
int cnt = 0;

void dfs(vector<vector<int>>& grid, vector<vector<bool>>& visited, int x, int y, int mark){
    cnt++;
    grid[x][y] = mark;
    visited[x][y] = true;
    for (int i = 0; i < 4; i++){
        int nextx = x + dir[i][0];
        int nexty = y + dir[i][1];
        if (nextx < 0 || nextx >= grid.size() || nexty < 0 || nexty >= grid[0].size()) continue;
        if (!visited[nextx][nexty] && grid[nextx][nexty] == 1) dfs(grid, visited, nextx, nexty, mark);
    }
    
}

int main(){
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> grid(n, vector<int>(m, 0));
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    bool isAllLand = true;
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> grid[i][j];
            if (grid[i][j] == 0) isAllLand = false;
        }
    }
    
    if (isAllLand == true){
        cout << n*m << endl;
        return 0;
    }
    
    int mark = 2;
    unordered_map<int, int> islandNum;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (!visited[i][j] && grid[i][j] == 1){
                cnt = 0;
                dfs(grid, visited, i, j, mark);
                islandNum[mark] = cnt;
                mark++;
            }
        }
    }
    
    int result = 0;
    unordered_set<int> islandSet;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (visited[i][j]) continue;
            cnt = 1;
            islandSet.clear();
            for (int k = 0; k < 4; k++){
                int nexti = i + dir[k][0];
                int nextj = j + dir[k][1];
                if (nexti < 0 || nexti >= n || nextj < 0 || nextj >= m || grid[nexti][nextj] == 0) continue;
                if (!islandSet.count(grid[nexti][nextj])){
                    cnt += islandNum[grid[nexti][nextj]];
                    islandSet.insert(grid[nexti][nextj]);
                }
            }
            result = max(result, cnt);
        }
    }
    
    // // print the grid
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < m; j++){
    //         cout << grid[i][j] << ' ';
    //     }
    //     cout << endl;
    // }
    
    // // print the map
    // for (auto i : islandNum){
    //     cout << i.first << ' ' << i.second << endl;
    // }
    
    // print the result;
    cout << result << endl;
    
    
    return 0;
}
