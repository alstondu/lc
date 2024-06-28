//  Created by Yuang Du on 2024/06/25.
//  738. 单调递增的数字

#include "lc.h"

class Solution {
public:
    int monotoneIncreasingDigits(int n) {
        string strNum = to_string(n);
        int flag = strNum.size();
        for (int i = strNum.size() - 1; i > 0; i--){
            if (strNum[i - 1] > strNum[i]){
                strNum[i - 1]--;
                flag = i;
            }
        }
        for (int i = flag; i < strNum.size(); i++){
            strNum[i] = '9';
        }
        return stoi(strNum);
    }
};

int main(){
    return 0;
}
