//  Created by Yuang Du on 2024/06/24.
//  763. 划分字母区间

#include "lc.h"

class Solution {
public:
    vector<int> partitionLabels(string s) {
        int hash[27] = {0};
        for (int i = 0; i < s.size(); i++){
            hash[s[i] - 'a'] = i;
        }
        vector<int> result;
        int left = 0; 
        int right = 0;
        for (int i = 0; i < s.size(); i++){
            right = max(right, hash[s[i] - 'a']);
            if (i == right) {
                result.push_back(right - left + 1);
                left = right + 1;
            }
        }
        return result;
    }
};

int main(){
    return 0;
}
