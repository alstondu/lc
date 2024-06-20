# 216. 组合总和 III

[Leedcode 链接🔗](https://leetcode.cn/problems/combination-sum-iii/description/)  
[Code](https://github.com/alstondu/lc/blob/main/216/216.cpp)

### 题目
找出所有相加之和为 ```n``` 的 ```k``` 个数的组合，且满足下列条件：

+ 只使用数字 $1$ 到 $9$
+ 每个数字 最多使用一次 

返回所有可能的有效组合的列表 。该列表不能包含相同的组合两次，组合可以以任何顺序返回

### 示例:

输入: 3 输出: ```[ [ 1, 2, 3 ], [ 8, 9, 4 ], [ 7, 6, 5 ] ]```


### 算法：

和 [Lc 77. 组合](https://leetcode.cn/problems/combinations/description/) 思路一致。额外设置 ```sum```储存当前 ```path``` 元素综合，并作为中止条件之一。

### 剪枝

和 [Lc 77. 组合](https://leetcode.cn/problems/combinations/description/) 一致，通过元素个数来剪枝 ```for```循环，另外还可以通过当前 ```sum```是否已经大于目标来剪枝。

