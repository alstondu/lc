# 112. 路径总和

[Leedcode 链接🔗](https://leetcode.cn/problems/path-sum/description/)  
[Code](https://github.com/alstondu/lc/blob/main/112/112.cpp)

### 题目
给定一个二叉树和一个目标和，判断该树中是否存在根节点到叶子节点的路径，这条路径上所有节点值相加等于目标和。

### 算法: 递归

1. 确定变量和返回值：
	
	输入当前节点，返还 ```bool```，表示以当前节点为根节点的二叉树是否存在路径和等于目标值。输入目标值，累减以最终和 0 进行比较。
	
2. 确定终止条件：

	遍历到叶子节点，判断当前累减后到值是否为 0。 是则递归返回 ```true```，反之则返还 ```false```。
	
3. 处理当前节点，调用自身函数

	以先左后右的方式进行递归，函数中直接传入 ```(targetSum - root->left->val)``` 以简化回溯代码。
	
	函数为 ```bool``` 型，叶子节点的判断结果应持续递归返还。
	
	
	
# 113. 路径总和 II

[Leedcode 链接🔗](https://leetcode.cn/problems/path-sum-ii/description/)  
[Code](https://github.com/alstondu/lc/blob/main/113/113.cpp)

### 题目
给你二叉树的根节点 ```root``` 和一个整数目标和 ```targetSum``` ，找出所有从根节点到叶子节点 路径总和等于给定目标和的路径。

### 算法

相比于 LC 112， 本题要求找出所有的路径，因此：

1. 需要遍历整棵树 ➡️ 递归函数不提前返回结果，用 ```void``` 型
2. 需要额外的数据结构储存路径上节点的值。

回溯需要两步：

1. 回溯 ```targetSum```
2. 回溯 ```path```


