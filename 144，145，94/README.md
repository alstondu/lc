# 二叉树

###  种类
 
 **满二叉树**： $2^k - 1$ 个节点，```k``` 为深度
 
 **完全二叉树**: 除底层外都满，底层连续 **```堆```**
 
 **二叉搜索树**：左节点 < 中间节点 < 右节点， 搜索元素时间复杂度 ```O(logn)```
 
 **平衡二叉搜索树**：左子树和右子树的高度差的绝对值不能大于1。
 **```set```, ```map```, ```multiset```, ```multimap```**
 
### 遍历方式
**深度优先搜索**： 递归法（栈），迭代法（非递归）

前序遍历：中左右

中序遍历：左中右

后序遍历：左右中

**广度优先搜多**：迭代法（队列）

层序遍历

### 定义

链式存储，类似链表

```c++
struct TreeNode {
int val;
TreeNode *left;
TreeNode *right;
TreeNode(int x): value(x), left(NULL), rignt(NULL){}
};
```

# 144，145，94 二叉树遍历
[Leedcode 链接🔗 144](https://leetcode.cn/problems/binary-tree-preorder-traversal/description/)  

[Leedcode 链接🔗 145](https://leetcode.cn/problems/binary-tree-postorder-traversal/description/) 

[Leedcode 链接🔗 94](https://leetcode.cn/problems/binary-tree-inorder-traversal/description/) 

[Code](https://github.com/alstondu/lc/blob/main/14414594/14414594.cpp)

## 题目
给定二叉树的根节点 ```root``` ，返回它节点值的前序/中旬/后序遍历。

## 递归法：
1. 确定递归函数的参数和返回值

	传入当前节点，和一个 ```vector``` 来储存节点值，以引用方式传入
	
2. 确定终止条件
	
	当前节点为空则终止本层递归，返回到上一层
	
3. 确定单层递归的逻辑

	根据遍历顺序处理单层信息，重复调用自身函数。
	
## 迭代法

按照树的遍历方向反向入栈（前序中左右，则按照右左中入栈）。遍历时当前节点（中，可以访问左右）后添加 ```NULL```节点以表明该节点已遍历但未处理。

若当前节点为空，说明上一节点已遍历且没有子节点（有子节点会入栈），则将上一节点的值写入 ```vector``` 并弹出以返回上一层。
 