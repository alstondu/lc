//  Created by Yuang Du on 2024/06/6.
//  257. 二叉树的所有路径

#include "lc.h"

class Solution {
private:
    void traversal(TreeNode* cur, vector<int>& path, vector<string>& result){
        path.push_back(cur->val);
        // 2. 
        if (cur->left == NULL && cur->right == NULL){
            string sPath;
            for(int i = 0; i < path.size() - 1; i++){
                sPath += to_string(path[i]);
                sPath += "->";
            }
            sPath += to_string(path[path.size() - 1]);
            result.push_back(sPath);
            return;
        }
        
        // 3.
        if(cur->left){
            traversal(cur->left, path, result);
            path.pop_back();
        }
        if(cur->right){
            traversal(cur->right, path, result);
            path.pop_back();
        }
    }

public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<int> path;
        vector<string> result;
        if(root == NULL) return result;
        traversal(root, path, result);
        return result;
    }
};

int main(){
    return 0;
}