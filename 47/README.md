# 47. 全排列 II

[Leedcode 链接🔗](https://leetcode.cn/problems/permutations-ii/description/)  
[Code](https://github.com/alstondu/lc/blob/main/47/47.cpp)

### 题目

给定一个**可包含重复数字**的序列 ```nums``` ，按任意顺序返回所有不重复的全排列。

---

### 示例
#### 示例 1：

**输入**：```nums = [1,1,2]```

**输出**：
```[[1,1,2],
 [1,2,1],
 [2,1,1]]```

#### 示例 2：

**输入**：```nums = [1,2,3]```

**输出**：```[[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]```

---

### 算法：

将 [Lc 40. 组合总和 II](https://github.com/alstondu/lc/blob/main/40/README.md) 的去重操作结合到 [Lc 78.子集](https://github.com/alstondu/lc/blob/main/78/README.md) 。