# 62. 不同路径 

[Leedcode 链接🔗](https://leetcode.cn/problems/unique-paths/description/)  
[Code](https://github.com/alstondu/lc/blob/main/62/62.cpp)

### 题目

一个机器人位于一个 ```m x n``` 网格的左上角 （起始点在下图中标记为 “Start” ）。

机器人每次只能向下或者向右移动一步。机器人试图达到网格的右下角（在下图中标记为 “Finish” ）。

问总共有多少条不同的路径？

<img src="https://code-thinking-1253855093.file.myqcloud.com/pics/20210110174033215.png" alt="">


---

#### 示例：

#### 示例 1:

**输入**：```m = 3, n = 7```

**输出**：```28```

#### 示例 2：

**输入**：```m = 2, n = 3```

**输出**：```3```

**解释**： 

从左上角开始，总共有 3 条路径可以到达右下角。

向右 -> 向右 -> 向下

向右 -> 向下 -> 向右

向下 -> 向右 -> 向右

#### 示例 3：

**输入**：```m = 7, n = 3```

**输出**：```28```

#### 示例 4：

**输入**：```m = 3, n = 3```
 
**输出**：```6```

---

### 算法:

因为只能向右走或向下走，因此当前位置只能由其上方的格子和左边的格子走到，把二者加起来就是当前的方案数。

1.  ```dp```数组定义：

	  	```dp[i][j]```：到达 ```i```行 ```j``` 列的位置有```dp[i][j]```种路径。
	  	 
2. 递推公式：```dp[i][j] = dp[i - 1][j] + dp[i][j - 1]```
  
3. ```dp``` 数组初始化：每一个位置都是由其上方和左侧推倒来的，因此最上面一行和最左侧一列应该初始化。因为只能向右走，因此最上面一行的每一个位置都只有一种路径，既一直向右走到达，因此初始化为 ```1```。同理，最左侧一列也初始化为 ```1```。
  
4. 遍历顺序：从左向右，从上到下。
  
5. 打印```dp```数组
