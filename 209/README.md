# 209. 长度最小的字数组

[Leedcode 链接🔗](https://leetcode.cn/problems/minimum-size-subarray-sum/description/)  
[Code](https://github.com/alstondu/lc/blob/main/209/209.cpp)

### 题目
给定一个含有 ```n``` 个正整数的数组和一个正整数 ```s``` ，找出该数组中满足其和 ```≥ s``` 的长度最小的连续子数组，并返回其长度。如果不存在符合条件的子数组，返回```0```。

### 示例：

输入：```s = 7, nums = [2,3,1,2,4,3]```
输出：2
解释：子数组 [4,3] 是该条件下的长度最小的子数组

### 算法：滑动窗口
暴力解法难免两层 ```for```循环（时间复杂度 ```O(n^2)```），可以考虑用双指针规避一层  
滑动窗口可以看作一种特殊的双指针，分别指向所得数组首末  

+ 作为外层 ```for```循环条件的指针（快指针）指向结果数组的尾部，持续向前推进  
+ 内层 ```while``` 数组内部元素和大于目标值时，慢指针向前推进缩短数组

每个元素被 ```for``` 循环的快指针操作一次，被```while``` 循环的慢指针操作一次，时间复杂度为 ```O(n)```

### 注意⚠️

+ ```result``` 设置为大数 ```INT32_MAX```逐渐缩小，以获得最短数组
+ ```while``` 循环内在计算完当前数组长度```L``` 和 当前元素和 ```sum``` 之后再推进慢指针 ```i```
+ 函数结尾返回 ```result``` 时使用 ```==```