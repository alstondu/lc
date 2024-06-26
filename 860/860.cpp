//  Created by Yuang Du on 2024/06/22.
//  860. 柠檬水找零

#include "lc.h"

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0;
        int ten = 0;
        for (int i = 0; i < bills.size(); i++){
            if (bills[i] == 5) five++;
            else if (bills[i] == 10) {
                if (five < 0) return false;
                ten++;
                five--;
            }
            else{
                if (ten > 0 && five > 0){
                    ten--;
                    five--;
                }
                else if (ten <= 0 && five >=3) five = five - 3;
                else return false;
            }
        }
        return true;
    }
};

int main(){
    return 0;
}
