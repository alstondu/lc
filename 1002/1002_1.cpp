// Practice 1
// 2024/03/20
#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    vector<string> commonChars(vector<string>& A){
        vector<string> result;
        int hash[26] = {0};
        for (int i = 0; i < A[0].size(); i++){
            hash[A[0][i] - 'a']++;
        }
        for (int i = 1; i < A.size(); i++){
            int hashotherstr[26] = {0}; //memset(hashOtherStr, 0, 26 * sizeof(int));
            for (int j = 0; j < A[i].size(); j++){
                hashotherstr[A[i][j] - 'a']++;
            }
            for (int k = 0; k < 26; k++){
                hash[k] = min(hash[k], hashotherstr[k]);
            }
        }
        for (int i = 0; i < 26; i++){
            while(hash[i]--){
            string s(1, i + 'a');
            result.push_back(s);
            }
        }
        return result;
    }
};

int main(){
    Solution solution;

    vector<string> A = {"bellac","labelc","rollerc"};
    vector<string> common = solution.commonChars(A);
    for(int i = 0; i < common.size(); i++){
        cout << "solution = " << common[i] << endl;
    }
    
    return 0;
}