# 797. 所有可能的路径

[Leedcode 链接🔗](https://leetcode.cn/problems/all-paths-from-source-to-target/)  
[Code](https://github.com/alstondu/lc/blob/main/797/797.cpp)

### 题目

给你一个有 `n` 个节点的 有向无环图（DAG），请你找出所有从节点 `0` 到节点 `n-1` 的路径并输出（不要求按特定顺序）

`graph[i]` 是一个从节点 `i` 可以访问的所有节点的列表（即从节点 `i` 到节点 `graph[i][j]` 存在一条有向边）。

---

### 示例：

<img alt="" src="https://assets.leetcode.com/uploads/2020/09/28/all_1.jpg">

**输入**：`graph = [[1,2],[3],[3],[]]`

**输出**：`[[0,1,3],[0,2,3]]`

---

### 算法：

同 [km98. 所有可达路径](https://github.com/alstondu/lc/blob/main/322/README.md)。