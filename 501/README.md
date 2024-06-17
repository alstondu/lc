# 501. 二叉搜索树中的众数 

[Leedcode 链接🔗](https://leetcode.cn/problems/find-mode-in-binary-search-tree/description/)  
[Code](https://github.com/alstondu/lc/blob/main/501/501.cpp)

### 题目

给你一个含重复值的二叉搜索树（BST）的根节点 ```root``` ，找出并返回 BST 中的**所有众数**（即，出现频率最高的元素）。

如果树中有不止一个众数，可以按任意顺序返回。


### 算法

中序遍历，双指针指向当前节点和前一节点，若而这相同则 ```count++``` 否则归 $1$。

设动态变化的 ```maxCount```, 若 ```count == maxCount```,  将当前节点的值存入数组，若 ```count > maxCount```，更新 ```maxCount```，清空数组并重新储存。