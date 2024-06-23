//  Created by Yuang Du on 2024/06/19.
//  51. N皇后

#include "lc.h"

class Solution {
public:
    vector<vector<string>> result;
    void backTracking(vector<string>& chessBoard, int n, int row){
        if (row == n) result.push_back(chessBoard);
        for (int col = 0; col < n; col++){
            if (isValid(chessBoard, row, col, n)){
                chessBoard[row][col] = 'Q';
                backTracking(chessBoard, n, row + 1);
                chessBoard[row][col] = '.';
            }
        }
    }

    bool isValid(vector<string>& chessBoard, int row, int col, int n){
        for (int i = 0; i < row; i++){
            if (chessBoard[i][col] == 'Q') return false;
        }
        for (int i = row - 1, j = col - 1; i >= 0 && j >=0; i--, j--){
            if (chessBoard[i][j] == 'Q') return false;
        }
        for (int i = row - 1, j = col + 1; i >=0 && j < n; i--, j++){
            if (chessBoard[i][j] == 'Q') return false;
        }
        return true;
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<string> chessBoard(n, string(n, '.'));
        backTracking(chessBoard, n, 0);
        return result;
    }
};

int main(){
    return 0;
}
