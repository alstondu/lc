# 674. 最长连续递增序列

[Leedcode 链接🔗](https://leetcode.cn/problems/longest-continuous-increasing-subsequence/description/)  
[Code](https://github.com/alstondu/lc/blob/main/674/674.cpp)

### 题目

给定一个未经排序的整数数组，找到最长且 连续递增的子序列，并返回该序列的长度。

连续递增的子序列可以由两个下标 `l` 和 `r（l < r）`确定，如果对于每个 `l <= i < r`，都有 `nums[i] < nums[i + 1]` ，那么子序列 `[nums[l], nums[l + 1], ..., nums[r - 1], nums[r]]`就是连续递增子序列。

---

#### 示例：

#### 示例 1：

**输入**：`nums = [1,3,5,4,7]`

**输出**：`3`

**解释**：

最长连续递增序列是 `[1,3,5]`, 长度为 `3`。

尽管 `[1,3,5,7]` 也是升序的子序列, 但它不是连续的，因为 `5` 和 `7` 在原数组里被 `4` 隔开。 

#### 示例 2：

**输入**：`nums = [2,2,2,2,2]`

**输出**：`1`

**解释**：最长连续递增序列是 `[2]`, 长度为 `1`。

---

### 算法:

相比于 [Lc 300. 最长递增子序列](https://github.com/alstondu/lc/blob/main/300/README.md)，本题的递增序列是连续的，因此不需要额外的 for 循环，只需要比较当前的 nums[i] 和前一个 nums[i - 1]的大小来做递推。