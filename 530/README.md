# 530. 二叉搜索树的最小绝对差 

[Leedcode 链接🔗](https://leetcode.cn/problems/minimum-absolute-difference-in-bst/description/)  
[Code](https://github.com/alstondu/lc/blob/main/530/530.cpp)

### 题目

给你一个**二叉搜索树**的根节点 ```root``` ，返回 树中任意两不同节点值之间的最小差值 。

差值是一个正数，其数值等于两值之差的绝对值。

####示例

**输入**：```root = [4,2,6,1,3]```

**输出**：```1```

### 算法:

中序遍历，双指针获取当前节点和前一节点差值，保存最小的一个。
