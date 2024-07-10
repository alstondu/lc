# 392. 判断子序列

[Leedcode 链接🔗](https://leetcode.cn/problems/is-subsequence/description/)  
[Code](https://github.com/alstondu/lc/blob/main/392/392.cpp)

### 题目

给定字符串 `s` 和 `t` ，判断 `s` 是否为 `t` 的子序列。

字符串的一个子序列是原始字符串删除一些（也可以不删除）字符而不改变剩余字符相对位置形成的新字符串。（例如，`"ace"`是`"abcde"`的一个子序列，而`"aec"`不是）。

### 进阶：

如果有大量输入的 `S`，称作 `S1, S2, ... , Sk` 其中 `k >= 10亿`，你需要依次检查它们是否为 `T` 的子序列。在这种情况下，你会怎样改变代码？

---

#### 示例：

#### 示例 1：

**输入**：`s = "abc", t = "ahbgdc"`

**输出**：`true`

#### 示例 2：

**输入**：`s = "axc", t = "ahbgdc"`

**输出**：`false`

---

### 算法:

先按照 [Lc 1143. 最长公共子序列](https://github.com/alstondu/lc/blob/main/1143/README.md) 求二者公共子序列，如果求出的公共子序列长度和 `s` 相等，则说明 `s` 就是 `t` 的子序列。