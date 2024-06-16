# 98. 验证二叉搜索树

[Leedcode 链接🔗](https://leetcode.cn/problems/validate-binary-search-tree/description/)  
[Code](https://github.com/alstondu/lc/blob/main/700/700.cpp)

### 题目

给你一个二叉树的根节点 ```root``` ，判断其是否是一个有效的二叉搜索树。。


### 算法:

中序遍历，判断节点的值是否单调递增。

双指针，一个指向前一节点，另一个指向当前节点，判断当前节点的值是否大于前一节点。