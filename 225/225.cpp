//  Created by Yuang Du on 2024/05/31.
//  225. 用队列实现栈

#include "lc.h"

class MyStack {
public:
    queue<int> queue;
    MyStack() {
    }
    
    void push(int x) {
        queue.push(x);
    }
    
    int pop() {
        int size = queue.size();
        size--;
        while(size--){
            queue.push(queue.front());
            queue.pop();
        }
        int result = queue.front();
        queue.pop();
        return result;
    }
    
    int top() {
        int result = queue.back();
        return result;
    }
    
    bool empty() {
        return queue.empty();
    }
};


int main (){
    return 0;
}