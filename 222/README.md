# 222. 完全二叉树节点的数量

[Leedcode 链接🔗](https://leetcode.cn/problems/count-complete-tree-nodes/description/)  
[Code](https://github.com/alstondu/lc/blob/main/222/222.cpp)

### 题目

给你一棵 完全二叉树 的根节点 ```root``` ，求出该树的节点个数。

### 算法: 

可以按照普通二叉树来进行前序/中序/后序/层序遍历或迭代，完全二叉树的性质可以使计算更加高效。

完全二叉树的子树是满二叉树，遍历每一个节点，若该节点判断为满二叉树的根节点，则可直接利用公式计算。

**判断是否为满二叉树：**

对于一个节点，若向左遍历的深度等于向右遍历的深度，则该节点为满二叉树的根节点。

	
	
	
	
