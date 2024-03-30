// Practice 1
// 2024/03/30

#include<iostream>
using namespace std;

class Solution{
public:
    bool isAnagram(string s, string t){
        if (s.size() != t.size()) return false;

        int hash[26] = {0};
        for (int i = 0; i < s.size(); i++){
            hash[s[i] - 'a']++;
            hash[t[i] - 'a']--;
        }
        for (int j = 0; j < 26; j++){
            if (hash[j] != 0) return false;
        }

        return true;
    }
};

int main(){
    Solution solution;
    string s = "abcd";
    string t = "ddb0";
    bool isanagram = solution.isAnagram(s, t);
    cout << "solution = " << isanagram << endl;
    return 0;
}