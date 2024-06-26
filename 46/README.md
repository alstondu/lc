# 46. 全排列

[Leedcode 链接🔗](https://leetcode.cn/problems/permutations/description/)  
[Code](https://github.com/alstondu/lc/blob/main/46/46.cpp)

### 题目

给定一个不含重复数字的数组 ```nums``` ，返回其所有可能的全排列 。你可以按任意顺序返回答案。

---

### 示例
#### 示例 1：

**输入**：```nums = [1,2,3]```

**输出**：```[[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]```

#### 示例 2：

**输入**：```nums = [0,1]```

**输出**：```[[0,1],[1,0]]```

#### 示例 3：

**输入**：```nums = [1]```
**输出**：```[[1]]```

---

### 算法：

排列问题强调顺序，同层遍历时可以取之前遍历过的元素，因此不需要 ```startIdx```。

同枝上需要去重，使用 ```used``` 标记并跳过同一枝上已经选去过的元素。

因为要使用```used```, 因此数组需要提前排序。