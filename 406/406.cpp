//  Created by Yuang Du on 2024/06/22.
//  406. 根据身高重建队列

#include "lc.h"

class Solution {
public:
    static bool cmp(vector<int>& a, vector<int>& b){
        if (a[0] == b[0]) return a[1] < b[1];
        return a[0] > b[0];
    }

    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        list<vector<int>> queue;
        sort(people.begin(), people.end(), cmp);
        for (int i = 0; i < people.size(); i++){
            int position = people[i][1];
            list<vector<int>>::iterator it = queue.begin();
            while(position--) it++;
            queue.insert(it, people[i]);
        }
        return vector<vector<int>>(queue.begin(), queue.end());
    }
};

int main(){
    return 0;
}
