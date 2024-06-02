# 栈与队列

队列： 先进先出

栈： 先进后出

都不被归类为容器，而是容器适配器（container adaptor）。


### 栈（SGI STL）

栈不提供走访和 ```iterator```，以底层容器完成其所有的工作，对外提供统一的接口，底层容器是可插拔的（也就是说我们可以控制使用哪种容器来实现栈的功能）。

**接口**：```push```, ```pop```, ```top``` （时间复杂度 ```O(1)```

**底层容器**（容纳内部数据）： ```vector, deque(default), list```

指定 ```vector``` 为容器：

```c++
std::stack<int, std::vector<int> > third;
```


### 队列（SGI STL）

性质同栈，接口同栈，底层容器同栈。

指定 ```list`` 为容器：

```c++
std::queue<int, std::list<int>> third;
```

# 232. 用栈实现队列

[Leedcode 链接🔗](https://leetcode.cn/problems/implement-queue-using-stacks/description/)  
[Code](https://github.com/alstondu/lc/blob/main/232/232.cpp)

### 题目

使用栈实现队列的下列操作：

```push(x)``` -- 将一个元素放入队列的尾部。

```pop()``` -- 从队列首部移除元素。

```peek()``` -- 返回队列首部的元素。

```empty()``` -- 返回队列是否为空。

### 思路：

利用两个栈来模拟队列。

**后入先出 + 先入后出 = 后入后出**

```Peek()``` 可以复用 ```pop()```，再把 ```pop``` 出来的元素 ```push()``` 回去，提高代码的简洁性。







