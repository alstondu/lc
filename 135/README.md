# 135. 分发糖果

[Leedcode 链接🔗](https://leetcode.cn/problems/maximize-sum-of-array-after-k-negations/description/)  
[Code](https://github.com/alstondu/lc/blob/main/135/135.cpp)

### 题目

```n``` 个孩子站成一排。给你一个整数数组 ```ratings``` 表示每个孩子的评分。

你需要按照以下要求，给这些孩子分发糖果：

每个孩子至少分配到 ```1``` 个糖果。

相邻两个孩子评分更高的孩子会获得更多的糖果。

请你给每个孩子分发糖果，计算并返回需要准备的 最少糖果数目 。

---

### 示例
#### 示例 1：

**输入**：```ratings = [1,0,2]```

**输出**：```5```

**解释**：

你可以分别给第一个、第二个、第三个孩子分发 2、1、2 颗糖果。

#### 示例 2：

**输入**：```ratings = [1,2,2]```

**输出**：```4```

**解释**：

你可以分别给第一个、第二个、第三个孩子分发 1、2、1 颗糖果。

第三个孩子只得到 1 颗糖果，这满足题面中的两个条件。 

---

### 算法：  

两次遍历，每次只按照一个方向比较。

先从左向右遍历，确定右边孩子比左边大的情况。

再从右向左遍历，确定左边孩子比右边大的情况。

⚠️确定左边孩子比右边大不能从左向右，否则无法利用已经改变的数值。