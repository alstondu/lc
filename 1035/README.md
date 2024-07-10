# 1035. 不相交的线

[Leedcode 链接🔗](https://leetcode.cn/problems/uncrossed-lines/description/)  
[Code](https://github.com/alstondu/lc/blob/main/1035/1035.cpp)

### 题目

在两条独立的水平线上按给定的顺序写下 `nums1` 和 `nums2` 中的整数。

现在，可以绘制一些连接两个数字 `nums1[i]` 和 `nums2[j]` 的直线，这些直线需要同时满足：

 `nums1[i] == nums2[j]`
 
且绘制的直线不与任何其他连线（非水平线）相交。

请注意，连线即使在端点也不能相交：每个数字只能属于一条连线。

以这种方法绘制线条，并返回可以绘制的最大连线数。

---

#### 示例：

#### 示例 1：

<img alt="" src="https://assets.leetcode.com/uploads/2019/04/26/142.png" style="width: 400px; height: 286px;">

**输入**：`nums1 = [1,4,2], nums2 = [1,2,4]`
**输出**：`2`
**解释**：

可以画出两条不交叉的线，如上图所示。 

但无法画出第三条不相交的直线，因为从 `nums1[1]=4` 到 `nums2[2]=4` 的直线将与从 `nums1[2]=2` 到 `nums2[1]=2` 的直线相交。

#### 示例 2：

**输入**：`nums1 = [2,5,1,2,5], nums2 = [10,5,2,1,5,2]`

**输出**：`3`

#### 示例 3：

**输入**：`nums1 = [1,3,7,1,7,5], nums2 = [1,9,2,5,1]`

**输出**：`2`

---

### 算法:

线不想交也就是要求元素在各自数组内顺序不变，其实就是求子序列，所以这题和 [Lc 1143. 最长公共子序列](https://github.com/alstondu/lc/blob/main/1143/README.md) 是一道题。