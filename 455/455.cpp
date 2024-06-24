//  Created by Yuang Du on 2024/06/20.
//  455. 分发饼干

#include "lc.h"

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int result = 0;
        int Idx = s.size() - 1;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        for (int i = g.size() - 1; i >= 0; i--){
            if (Idx >= 0 && s[Idx] >= g[i]){
                result ++;
                Idx--;
            }
        }
        return result;
    }
};

int main(){
    return 0;
}
