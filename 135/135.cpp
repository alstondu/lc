//  Created by Yuang Du on 2024/06/22.
//  135. 分发糖果

#include "lc.h"

class Solution {
public:
    int candy(vector<int>& ratings) {
        int sum = 0;
        vector<int> candy(ratings.size(), 1);
        for (int i = 1; i < ratings.size(); i++){
            if (ratings[i] > ratings[i - 1]) candy[i] = candy[i - 1] + 1;
        }
        for (int i = ratings.size() - 2; i >= 0; i--){
            if (ratings[i] > ratings[i + 1]) candy[i] = max(candy[i + 1] + 1, candy[i]);
        }

        for (int i = 0; i < candy.size(); i++) sum += candy[i];

        return sum;
    }
};

int main(){
    return 0;
}
