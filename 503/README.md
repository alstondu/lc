# 503. 下一个更大元素 II

[Leedcode 链接🔗](https://leetcode.cn/problems/next-greater-element-ii/description/)  
[Code](https://github.com/alstondu/lc/blob/main/503/503.cpp)

### 题目

给定一个循环数组 `nums` （ `nums[nums.length - 1]` 的下一个元素是 `nums[0]` ），返回 `nums` 中每个元素的下一个更大元素 。

数字 `x` 的下一个更大的元素是按数组遍历顺序，这个数字之后的第一个比它更大的数，这意味着你应该循环地搜索它的下一个更大的数。如果不存在，则输出 `-1` 。

---

#### 示例：

#### 示例 1:

**输入**: `nums = [1,2,1]`

**输出**: `[2,-1,2]`

**解释**: 

第一个 `1` 的下一个更大的数是 `2`；

数字 `2` 找不到下一个更大的数； 

第二个 `1` 的下一个最大的数需要循环搜索，结果也是 `2`。

#### 示例 2:

**输入**: `nums = [1,2,3,4,3]`

**输出**: `[2,3,4,-1,4]`

---

### 算法:

处理循环数组：

```c++
for (int i = 0; i < nums.size() * 2; i++){
	// replace i with i % nums.size()
}
```
然后用单调栈就可解。