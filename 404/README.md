# 404. 左叶子之和

[Leedcode 链接🔗](https://leetcode.cn/problems/sum-of-left-leaves/description/)  
[Code](https://github.com/alstondu/lc/blob/main/404/404.cpp)

### 题目

给定二叉树的根节点 ```root``` ，返回所有左叶子之和。

+ 叶子节点
+ 父节点的左子节点

### 算法: 递归，前序遍历


按照前序（中左右）遍历节点，若当前节点的左子节点不为 ```NULL```, 左子节点的左右子节点都为 ```NULL```, 则该左子节点的值为有效值，结果累加。
	
	
	
	
