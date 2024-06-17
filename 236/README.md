# 236. 二叉树的最近公共祖先 

[Leedcode 链接🔗](https://leetcode.cn/problems/lowest-common-ancestor-of-a-binary-tree/description/)  
[Code](https://github.com/alstondu/lc/blob/main/236/236.cpp)

### 题目

给定一个二叉树, 找到该树中两个指定节点的最近公共祖先（一个节点也可以是它自己的祖先）。


### 算法:

后序遍历，

1. 输入当前节点和两个目标节点，返回节点。

2. 中止条件：

	若查询到叶子节点没有找到所给节点，则返回 ```NULL```, 若查询到，则返回该节点。

3. 当前处理：
	
	若左右的返回都为```NULL```, 说明没有找到所给节点，向上层返回```NULL```。
	
	若左空右不空，说明右子树找到公共节点，返回右子树节点。
	
	若右空左不空，说明左子树找到公共节点，返回左子树节点。
	
	否则返回 ```NULL```，什么都没找到。