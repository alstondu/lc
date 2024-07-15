//  Created by Yuang Du on 2024/07/13.
//  797. 所有可达路径

#include "lc.h"

class Solution {
public:
    vector<vector<int>> result;
    vector<int> path;

    void dfs(vector<vector<int>> graph, int x, int n){
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
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        path.push_back(0);
        dfs(graph, 0, graph.size() - 1);
        return result;
    }
};

int main(){
    return 0;
}