# 84. 柱状图中最大的矩形

[Leedcode 链接🔗](https://leetcode.cn/problems/largest-rectangle-in-histogram/description/)  
[Code](https://github.com/alstondu/lc/blob/main/84/84.cpp)

### 题目

给定 `n` 个非负整数，用来表示柱状图中各个柱子的高度。每个柱子彼此相邻，且宽度为 `1` 。

求在该柱状图中，能够勾勒出来的矩形的最大面积。

---

#### 示例：

#### 示例 1:

<img src="https://assets.leetcode.com/uploads/2021/01/04/histogram.jpg">

**输入**: `heights = [2,1,5,6,2,3]`

**输出**: `10`

#### 示例 2:

<img src="https://assets.leetcode.com/uploads/2021/01/04/histogram-1.jpg">

**输入**: `heights = [2,4]`

**输出**: `4`

---

### 算法:

与接雨水逻辑恰好相反，找到最大的面积要从最高的柱子入手，遍历数组，发现下一个元素比当前元素小则开始处理。栈口到栈底单调递减，此时栈口元素是最大元素，pop 出来之后栈口元素就是其左边的最大元素，比较其与当前元素取大者作为矩形的高，下标差值为矩形的底。

依旧是用 while 循环比较直至栈内元素没有比当前元素小的，入栈，循环的过程中矩形的底和高都在发生变化，记录最大值。

本题如果数组元素单调递增，那么就进不到 while 的处理逻辑，如果单调递减，那么while 循环到最后就会把栈内元素全部弹出，空栈，不会进行计算，结果都是 0. 与接雨水不同，如果数组内元素单调，接雨水就接不到，结果为 0 是正确的，但是单调的数组也会有矩形面积。解决方法是在数组的首尾各填入一个 0。