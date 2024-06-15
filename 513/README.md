# 513.找树左下角的值

[Leedcode 链接🔗](https://leetcode.cn/problems/find-bottom-left-tree-value/description/)  
[Code](https://github.com/alstondu/lc/blob/main/513/513.cpp)

### 题目
给定一个二叉树的根节点 ```root```，请找出该二叉树的最底层最左边节点的值。

假设二叉树中至少有一个节点。

### 算法 1：层序遍历
层序遍历，将每一层第一个节点的值赋给 ```result```。

### 算法 2: 递归

1. 确定变量和返回值：
	
	输入当前节点，非引用方式传入深度，用于比较。
	
2. 确定终止条件：

	当遍历到叶子节点，比较当前深度和最大深度，更新最大深度并储存其值为```result```。
	
3. 处理当前节点，调用自身函数

	无所谓遍历顺序，先左后右。
	
	调用函数时传入 ```depth + 1``` 或在```if```里手动增删```depth```完成回溯。
	
	
	
