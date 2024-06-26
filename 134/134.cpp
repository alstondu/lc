//  Created by Yuang Du on 2024/06/22.
//  134. 加油站

#include "lc.h"

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int curSum = 0;
        int totalSum = 0;
        int start = 0;
        for (int i = 0; i < gas.size(); i++){
            curSum += (gas[i] - cost[i]);
            totalSum += (gas[i] - cost[i]);
            if (curSum < 0){
                start = i + 1;
                curSum = 0;
            }
        }
        if (totalSum < 0) return -1;
        else return start;
    }
};

int main(){
    return 0;
}
