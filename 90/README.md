# 90. 子集II

[Leedcode 链接🔗](https://leetcode.cn/problems/subsets-ii/description/)  
[Code](https://github.com/alstondu/lc/blob/main/90/90.cpp)

### 题目

给你一个整数数组 ```nums``` ，其中**可能**包含重复元素，请你返回该数组所有可能的子集（幂集）。

解集不能包含重复的子集。返回的解集中，子集可以按任意顺序排列。

---

### 示例
#### 示例 1：

**输入**：```nums = [1,2,2]```

**输出**：```[[],[1],[1,2],[1,2,2],[2],[2,2]]```

#### 示例 2：

**输入**：```nums = [0]```
**输出**：```[[],[0]]```

---

### 算法：

将 [Lc 40. 组合总和 II](https://github.com/alstondu/lc/blob/main/40/README.md) 的去重操作结合到 [Lc 78.子集](https://github.com/alstondu/lc/blob/main/78/README.md) 。