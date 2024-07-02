# 96. 不同的二叉搜索树 

[Leedcode 链接🔗](https://leetcode.cn/problems/min-cost-climbing-stairs/description/)  
[Code](https://github.com/alstondu/lc/blob/main/96/96.cpp)

### 题目

给你一个整数 ```n``` ，求恰由 ```n``` 个节点组成且节点值从 ```1``` 到 ```n``` 互不相同的二叉搜索树有多少种？返回满足题意的二叉搜索树的种数。

---

#### 示例：

<img alt="" src="https://assets.leetcode.com/uploads/2021/01/18/uniquebstn3.jpg" style="width: 600px; height: 148px;">

**输入**：```n = 3```

**输出**：```5```

---

### 算法:

因为每次只能爬 1/2 阶，到达 dp[i] 的位置的花费可以是到达 dp[i - 1] 的花费 + 从 i - 1 爬的花费，或者达 dp[i - 2] 的花费 + 从 i - 2 爬的花费，二者取最小。

1.  ```dp```数组定义：

	  	```dp[i]```：到达 ```i``` 的位置所需要的最小花费为 ```dp[i]```
  
2. 递推公式：```dp[i] = min (dp[i - 1] + cost[i - 1], dp[i - 2] + cost[i - 2]```
  
3. ```dp``` 数组初始化： 从 ```0/1``` 开始跳不需要花费，只有跳才花费，因此```dp[0] = 0, dp[0] = 0```
  
4. 遍历顺序：从前向后
  
5. 打印```dp```数组
