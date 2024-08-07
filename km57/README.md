# km57. 爬楼梯（完全背包）

[Leedcode 链接🔗](https://kamacoder.com/problempage.php?pid=1067)  
[Code](https://github.com/alstondu/lc/blob/main/km57/km57.cpp)

### 题目

假设你正在爬楼梯。需要 ```n``` 阶你才能到达楼顶。 

每次你可以爬至多```m (1 <= m < n)```个台阶。你有多少种不同的方法可以爬到楼顶呢？ 

注意：给定 ```n``` 是一个正整数。

输入共一行，包含两个正整数，分别表示n, m

输出一个整数，表示爬到楼顶的方法数

---

#### 示例：

**输入**：```3 2```

**输出**：```3```

**解释**：

有三种方法可以爬到楼顶。

1. 1 阶 + 1 阶 + 1 阶

2. 1 阶 + 2 阶

3. 2 阶 + 1 阶

---

### 算法:

问题可以转换为一个完全背包问题，每次能爬的台阶数量为物品，顶楼层数为背包载量。

给定背包载量（层数），有多少种排列（上楼方法）能够装满（到达顶层）背包。

遍历顺序：先背包后物品，正序遍历。
  