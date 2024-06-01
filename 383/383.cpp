//  Created by Yuang Du on 2024/05/28.
//  Lc 383. 赎金信

#include "lc.h"

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int alphabet[26] = {0};
        if(ransomNote.size() > magazine.size()) return false;
        for (int i = 0; i < magazine.size() - 1; i++){
            alphabet[magazine[i] - 'a']++;
        }
        for (char charactor : ransomNote){
            alphabet[charactor - 'a']--;
            if (alphabet[charactor - 'a'] < 0) return false;
        }
        return true;
    }
};

int main(){
    return 0;
}