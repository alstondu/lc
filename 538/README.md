# 538. 把二叉搜索树转换为累加树 

[Leedcode 链接🔗](https://leetcode.cn/problems/convert-bst-to-greater-tree/description/)  
[Code](https://github.com/alstondu/lc/blob/main/538/538.cpp)

### 题目

给出二叉搜索树的根节点，该树的节点值各不相同，请你将其转换为累加树（Greater Sum Tree），使每个节点 ```node``` 的新值等于原树中大于或等于 ```node.val``` 的值之和。


### 算法：双指针

二叉搜索树从大到小遍历，遵循右中左的顺序。定义双指针指向当前节点前一节点，处理中间节点时把当前节点和前一节点的数值相加。
	


