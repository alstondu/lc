# 337. 打家劫舍III  

[Leedcode 链接🔗](https://leetcode.cn/problems/house-robber-iii/description/)  
[Code](https://github.com/alstondu/lc/blob/main/337/337.cpp)

### 题目

小偷又发现了一个新的可行窃的地区。这个地区只有一个入口，我们称之为 root 。

除了 root 之外，每栋房子有且只有一个“父“房子与之相连。一番侦察之后，聪明的小偷意识到“这个地方的所有房屋的排列类似于一棵二叉树”。 如果 两个直接相连的房子在同一天晚上被打劫 ，房屋将自动报警。

给定二叉树的 root 。返回 在不触动警报的情况下 ，小偷能够盗取的最高金额 。

---

#### 示例：

#### 示例 1：

<img alt="" src="https://assets.leetcode.com/uploads/2021/03/10/rob1-tree.jpg">

**输入**: ```root = [3,2,3,null,3,null,1]```

**输出**: ```7```

**解释**: 

小偷一晚能够盗取的最高金额 ```3 + 3 + 1 = 7```

#### 示例 2：

<img alt="" src="https://assets.leetcode.com/uploads/2021/03/10/rob2-tree.jpg">

**输入**: ```root = [3,4,5,1,3,null,1]```

**输出**: ```9```

**解释**: 

小偷一晚能够盗取的最高金额 ```4 + 5 = 9```

---

### 算法:

每一个节点可以分为不偷/偷。用一个二维数组（```dp[0], dp[1]```）分别记录该节点不偷/偷所对应的最高金额。后序遍历，当前节点偷/不偷取决于其左右节点，最终跟节点的 ```dp[0], dp[1]``` 表示全部遍历之后最终节点不偷/偷所能获得的最大金额，取大者即为所求。

对于每一个节点，如果偷，则左右子节点都不能偷，则可获得的金额为当前节点的值加上左右节点不偷的金额，既 ```dp[1]  = cur->val + left[0] + right[0]```。如果不偷，则左右子节点可偷可不偷，选择各自较大者做和，既 ```dp[0] = max(left[0], left[1]) + max(right[0], right[1])```。