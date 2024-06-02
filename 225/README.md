# 225. 用队列实现栈

[Leedcode 链接🔗](https://leetcode.cn/problems/implement-stack-using-queues/description/)  
[Code](https://github.com/alstondu/lc/blob/main/225/225.cpp)

### 题目

使用栈实现队列的下列操作：

```push(x)``` -- 元素 x 入栈

```pop()``` -- 移除栈顶元素。

```top()``` -- 获取栈顶元素。

```empty()``` -- 返回栈是否为空。

### 思路

一个队列可以通过把弹出的元素重新存回队列尾端的方式来实现栈。

```pop()```:

为了弹出队列末尾元素，先将该元素前面的 ```size() - 1``` 个元素依次弹出并存到队列尾部。

