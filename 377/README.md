# 377. 组合总和 Ⅳ 

[Leedcode 链接🔗](https://leetcode.cn/problems/combination-sum-iv/description/)  
[Code](https://github.com/alstondu/lc/blob/main/377/377.cpp)

### 题目

给你一个整数数组 ```coins``` 表示不同面额的硬币，另给一个整数 ```amount``` 表示总金额。

请你计算并返回可以凑成总金额的硬币组合数。如果任何硬币组合都无法凑出总金额，返回 ```0``` 。

假设每一种面额的硬币有无限个。 

题目数据保证结果符合 ```32``` 位带符号整数。


---

#### 示例：

#### 示例 1：

**输入**：```amount = 5, coins = [1, 2, 5]```

**输出**：```4```

**解释**：

有四种方式可以凑成总金额：

```5=5```

```5=2+2+1```

```5=2+1+1+1```

```5=1+1+1+1+1```

#### 示例 2：

**输入**：```amount = 3, coins = [2]```

**输出**：```0```

**解释**：

只用面额 ```2``` 的硬币不能凑成总金额 ```3``` 。

#### 示例 3：

**输入**：```amount = 10, coins = [10]``` 

**输出**：```1```

---

### 算法:

相比于 [Lc 518.零钱兑换 II](https://github.com/alstondu/lc/blob/main/518/README.md)，本题求的是排列，因此只是遍历顺序发生了变化，要先遍历背包，再遍历物品。


总结来看，单纯的完全背包问题，遍背包和物品的遍历顺序可以调换（两层 ```for``` 循环），正向遍历保证重复取。

但是涉及到求有多少种方法时，要分为组合和排列。组合问题不考虑顺序，先物品后背包；排列问题不同顺序也算，先背包后物品。