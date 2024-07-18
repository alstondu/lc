# km100.岛屿的最大面积

[Leedcode 链接🔗](https://kamacoder.com/problempage.php?pid=1172)  
[Code](https://github.com/alstondu/lc/blob/main/km100/km100.cpp)

### 题目

给定一个由 `1`（陆地）和 `0`（水）组成的矩阵，计算岛屿的最大面积。岛屿面积的计算方式为组成岛屿的陆地的总数。岛屿由水平方向或垂直方向上相邻的陆地连接而成，并且四周都是水域。你可以假设矩阵外均被水包围。

#### 输入描述

第一行包含两个整数 `N, M`，表示矩阵的行数和列数。后续 `N` 行，每行包含 `M` 个数字，数字为 `1` 或者 `0`，表示岛屿的单元格。

#### 输出描述

输出一个整数，表示岛屿的最大面积。如果不存在岛屿，则输出 `0`。

---

#### 示例：

#### 示例 1:

<img src="https://code-thinking-1253855093.file.myqcloud.com/pics/20240516111613.png" alt="">

**输入**：

```
4 5
1 1 0 0 0
1 1 0 0 0
0 0 1 0 0
0 0 0 1 1
```

**输出**：

```
4
```

---

### 算法:

思路同 [km99. 岛屿数量](https://github.com/alstondu/lc/blob/main/km99/README.md)，只需要在 dfs 或 bfs 时计数岛屿面积，最终取大值。