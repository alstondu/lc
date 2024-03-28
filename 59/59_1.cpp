// Practice 1
// 2024/03/26

#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    vector<vector<int> > generateMatrix(int n){
        vector<vector<int> > result(n, vector<int>(n, 0));
        int loop = n/2;
        int start = 0;
        int offset = 1;
        int count = 1;
        int i, j;
        int mid = n/2;
        while (loop--){
            i = start;
            j = start;
            for (j; j < n - offset; j++){
                result[i][j] = count++;
            }
            for (i; i < n - offset; i++){
                result[i][j] = count++;
            }
            for (; j > start; j--){
                result[i][j] = count++;
            }
            for (; i > start; i--){
                result[i][j] = count++;
            }
            start++;
            offset++;
        }
        if (n % 2){
            result[mid][mid] = count;
        }

        return result;
    }
};

void displayMatrix(const std::vector<std::vector<int> >& matrix) {
    for (const auto& row : matrix) { // Iterate through each row
        for (const auto& element : row) { // Iterate through each element in the row
            std::cout << element << " "; // Print element followed by a space
        }
        std::cout << std::endl; // After each row, print a newline
    }
}

int main(){
    
    Solution solution;

    displayMatrix(solution.generateMatrix(4));

    return 0;
}