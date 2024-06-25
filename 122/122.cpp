//  Created by Yuang Du on 2024/06/21.
//  122.买卖股票的最佳时机II

#include "lc.h"

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int result = 0;
        for (int i = 0; i < prices.size(); i++){
            int curDiff = prices[i + 1] - prices[i];
            if (curDiff > 0){
                result += curDiff;
            }
        }
        return result;
    }
};

int main(){
    return 0;
}
