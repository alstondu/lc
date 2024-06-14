# 106.从中序与后序遍历序列构造二叉树

[Leedcode 链接🔗](https://leetcode.cn/problems/construct-binary-tree-from-inorder-and-postorder-traversal/description/)  
[Code](https://github.com/alstondu/lc/blob/main/106/106.cpp)

### 题目
给定一个二叉树的根节点 ```root```，请找出该二叉树的最底层最左边节点的值。

假设二叉树中至少有一个节点。


### 算法: 递归

1. 确定变量和返回值：
	
	输入当前节点，返回子节点翻转后的节点
	
2. 确定终止条件：

	一个 branch 走到头，当前节点为 ```NULL```
	
3. 处理当前节点，调用自身函数

	+ 前序遍历：中左右

		中：```swap``` 当前节点左右子节点
		
		左：调用自身函数，左子节点作为输入
		
		右： 调用自身函数，右子节点作为输入
	
	
	+ 后序遍历：左右中
	
		左：调用自身函数，左子节点作为输入
		
		右： 调用自身函数，右子节点作为输入
		
		中：```swap``` 当前节点左右子节点
	
	+ 中序遍历： 左中右
	
		遍历完左之后交换，右被翻转到左，此时再次遍历左。
	
	
	
# 105.从前序与中序遍历序列构造二叉树

[Leedcode 链接🔗](https://leetcode.cn/problems/construct-binary-tree-from-preorder-and-inorder-traversal/description/)  
[Code](https://github.com/alstondu/lc/blob/main/105/105.cpp)

### 题目
给定一个二叉树的根节点 ```root```，请找出该二叉树的最底层最左边节点的值。

假设二叉树中至少有一个节点。