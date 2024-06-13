# 101. 对称二叉树

[Leedcode 链接🔗](https://leetcode.cn/problems/symmetric-tree/)  
[Code](https://github.com/alstondu/lc/blob/main/101/101.cpp)

### 题目
给定一棵二叉树的根节点 ```root``` ，检查它是否轴对称。

### 算法: 递归，后序遍历

判断根节点的左右子树是否能相互反转。

同时遍历两个子树，判断两个子树相应个节点的外侧子节点和对应的内侧子节点是否相等。左子树：左右中， 右子树：右左中。

后序遍历：通过递归函数的返回值来判断两个子树的内侧节点和外侧节点是否相等。

1. 确定变量和返回值：
	
	输入当前左右子树的根节点，返回 ```bool```。
	
2. 确定终止条件：提前处理好空指针

	+ 左空右不空，```False```
	+ 右空左不空， ```False```
	+ 左右不空但不相等，```False```
	+ 左右都空，```True```
	+ 左右不空值相等，继续比较，单层逻辑
	
3. 处理当前节点，调用自身函数

	比较外侧节点：左节点的左子节点 VS 右节点的右子节点
	
	比较内侧节点：左节点的右子节点 VS 右节点的左子节点
	
	外侧和内侧都相同，```True```
	
	
	
	