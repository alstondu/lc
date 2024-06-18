# 235. 二叉搜索树的最近公共祖先

[Leedcode 链接🔗](https://leetcode.cn/problems/lowest-common-ancestor-of-a-binary-search-tree/description/)  
[Code](https://github.com/alstondu/lc/blob/main/235/235.cpp)

### 题目

给定一个二叉搜索树, 找到该树中两个指定节点的最近公共祖先。


### 算法:

若当前节点的值同时大于两个给定节点，向左搜索，小于则向右搜索，当当前节点的值位于其中间，则为最近公共祖先。