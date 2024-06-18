# 701. 二叉搜索树中的插入操作 

[Leedcode 链接🔗](https://leetcode.cn/problems/insert-into-a-binary-search-tree/description/)  
[Code](https://github.com/alstondu/lc/blob/main/701/701.cpp)

### 题目

给定二叉搜索树（BST）的根节点 ```root``` 和要插入树中的值 ```value``` ，将值插入二叉搜索树。 返回插入后二叉搜索树的根节点。 输入数据和原始二叉搜索树中的任意节点值都不同。


### 算法:

任何一个值都可以直接接到原二叉搜索树的叶子节点上。

按照搜索树的搜索顺序遍历到叶子节点时，定义新节点并返还。

```TreeNode*```型函数返还节点可以用上一层的```left```或```right```接住来完成新节点的链接。