# 106.从中序与后序遍历序列构造二叉树

[Leedcode 链接🔗](https://leetcode.cn/problems/construct-binary-tree-from-inorder-and-postorder-traversal/description/)  
[Code](https://github.com/alstondu/lc/blob/main/106/106.cpp)

### 题目
根据一棵树的中序遍历与后序遍历构造二叉树，假设树中没有重复的元素。

####示例
+ 中序遍历 ```inorder = [9,3,15,20,7]```
+ 后序遍历 ```postorder = [9,15,7,20,3]``` 

	返回如下的二叉树：
	
	![二叉树](https://assets.leetcode.com/uploads/2021/02/19/tree.jpg)


### 算法:

1. 递归函数传入中序遍历和后序遍历，返还根节点

2. 根据后序确定根节点➡️后序遍历的末尾元素

3. 用根节点分割中序遍历获得中序的左右子树

4. 用中序的左子树确定后序的左右子树

5. 递归传入当前根节点的左子树的中序和后序，右子树的中序和后序


# 105.从前序与中序遍历序列构造二叉树

[Leedcode 链接🔗](https://leetcode.cn/problems/construct-binary-tree-from-preorder-and-inorder-traversal/description/)  
[Code](https://github.com/alstondu/lc/blob/main/105/105.cpp)

### 题目
给定两个整数数组 ```preorder``` 和 ```inorder``` ，其中 ```preorder``` 是二叉树的先序遍历， ```inorder``` 是同一棵树的中序遍历，请构造二叉树并返回其根节点。

####示例
+ 前序遍历 ```preorder = [3,9,20,15,7]```
+ 中序遍历 ```inorder = [9,3,15,20,7]``` 

	返回如下的二叉树：
	
	![二叉树](https://assets.leetcode.com/uploads/2021/02/19/tree.jpg)
	
### 算法
与 LC 106 思路相同，只不过根节点通过前序遍历的第一项找到。