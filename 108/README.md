# 108.将有序数组转换为二叉搜索树 

[Leedcode 链接🔗](https://leetcode.cn/problems/convert-sorted-array-to-binary-search-tree/description/)  
[Code](https://github.com/alstondu/lc/blob/main/108/108.cpp)

### 题目

给你一个整数数组 ```nums``` ，其中元素已经按 **升序** 排列，请你将其转换为一棵**平衡**二叉搜索树。


### 算法：

数组升序且要求所得二叉树平衡。

找到传入数组中值，用来递归分割数组分别形成左右子树。

引用形式传入数组 + 传入分割左右边界，避免反复值拷贝，占用更多内存空间。
	


