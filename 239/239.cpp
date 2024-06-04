//  Created by Yuang Du on 2024/06/3.
//  239. 滑动窗口最大值

#include "lc.h"

class Solution {
private:
    class MyQueue{
        public:
        deque<int> que;
        void push(int value){
            while(!que.empty() && value > que.back()){
                que.pop_back();
            }
            que.push_back(value);
        }

        void pop(int value){
            if(!que.empty() && value == que.front()){
                que.pop_front();
            }
        }

        int getMax(){
            return que.front();
        }
    };
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        MyQueue que;
        vector<int> result;
        for (int i = 0; i < k; i++){
            que.push(nums[i]);
        }
        result.push_back(que.getMax());

        for (int i = k; i < nums.size(); i++){
            que.pop(nums[i - k]);
            que.push(nums[i]);
            result.push_back(que.getMax());
        }
        return result;
    }
};

int main (){
    return 0;
}