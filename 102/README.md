# 102. 二叉树的层序遍历

[Leedcode 链接🔗](https://leetcode.cn/problems/binary-tree-level-order-traversal/description/)  
[Code](https://github.com/alstondu/lc/blob/main/102/102.cpp)

### 题目
给定二叉树的根节点 ```root```，返回其节点值的**层序遍历**, 结果为二维数组。（即逐层地，从左到右访问所有节点）。


### 算法：双指针

两层 ```while```循环

外层循环控制程序运行结束：队列为空，代表没有新的节点存入，树遍历完成

内层循环遍历一层，循环次数为上一层节点数 ```size``` 。每次循环弹出当前节点，写入数组，并存入其子节点到队列。循环结束后将本层数组写入最终的二维数组。

⚠️ 循环过程中队列的 ```size``` 动态变化，同时存在本层和上一层节点。