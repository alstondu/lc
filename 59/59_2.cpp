// Practice 2
// 2024/05/23

#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        vector<vector<int>> generateMatrix(int n) {
            vector<vector<int>> result(n, vector<int>(n, 0));
            int loop = n/2;
            int startx = 0, starty = 0;
            int cnt = 0;
            int mid = 0;
            int offset = 1;
            int i, j;

            while (loop --){
                i = startx;
                j = starty;

                for (; j < n - offset; j++){
                    result[i][j] = cnt++;
                }
                for (; i < n - offset; i++){
                    result[i][j] = cnt++;
                }
                for (; j > starty; j--){
                    result[i][j] = cnt++;
                }
                for (; i > startx; i--){
                    result[i][j] = cnt++;
                }

                startx++;
                starty++;
                offset++;
            }
        
        if (n % 2){
            result[mid][mid] = cnt;
        }
        return result;
        }
};


void displayMatrix(const std::vector<std::vector<int>>& matrix) {
    for (const auto& row : matrix) { // Iterate through each row
        for (const auto& element : row) { // Iterate through each element in the row
            std::cout << element << " "; // Print element followed by a space
        }
        std::cout << std::endl; // After each row, print a newline
    }
}

int main(){
    Solution solution;
    // cout << "Solution =" << solution.generateMatrix(3) << endl;

    // Display the matrix
    displayMatrix(solution.generateMatrix(4));
    return 0;
}