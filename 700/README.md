# 700. 二叉搜索树中的搜索

[Leedcode 链接🔗](https://leetcode.cn/problems/search-in-a-binary-search-tree/description/)  
[Code](https://github.com/alstondu/lc/blob/main/700/700.cpp)

### 题目

给定二叉搜索树（BST）的根节点 ```root``` 和一个整数值 ```val```。

你需要在BST中找到节点值等于 ```val``` 的节点。 返回以该节点为根的子树。 如果节点不存在，则返回 ```null``` 。

####示例

**输入**：```root = [4,2,7,1,3], val = 2```

**输出**：```[2,1,3]```

	
<img alt="" src="https://assets.leetcode.com/uploads/2021/01/12/tree1.jpg" style="height: 179px; width: 250px;">


### 算法:

利用二叉搜索树的特性，按照当前节点和 ```val``` 的大小关系确定遍历顺序。