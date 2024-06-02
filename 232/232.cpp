//  Created by Yuang Du on 2024/05/31.
//  232. 用栈实现队列

#include "lc.h"

class MyQueue {
public:
    stack<int> stIn;
    stack<int> stOut;
    MyQueue() {

    }
    
    void push(int x) {
        stIn.push(x);
    }
    
    int pop() {
        if (stOut.empty()){
            while (!stIn.empty()){
                stOut.push(stIn.top());
                stIn.pop();
            }
        }
        int result = stOut.top();
        stOut.pop();
        return result;
    }
    
    int peek() {
        int result = this->pop();
        stOut.push(result);
        return result;
    }
    
    bool empty() {
        return stIn.empty() && stOut.empty();
    }
};


int main (){
    return 0;
}