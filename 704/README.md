# 704. 二分查找

[Leedcode 链接🔗](https://leetcode.cn/problems/binary-search/description/)  
[Code](https://github.com/alstondu/lc/blob/main/704/704.cpp)

### 题目
给定一个 n 个元素有序的（升序）整型数组 nums 和一个目标值 target  ，写一个函数搜索 nums 中的 target，如果目标值存在返回下标，否则返回 -1。

### 二分查找条件：
+ 有序数组
+ 数组中无重复元素

### 算法(左闭右闭)
在闭区间```[left, right]```内通过比较区间中值和```target```大小不断缩小判断区间。  

+ 以```while```为外层循环， ```if```为内层判断。  
+ ```while```循环条件:  ```(left <= right)```, ```left = rignt``` 有意义, _*左闭右开区间为```(left < right)```*_
+ ```if``` 判断条件：```nums[mid] < target/nums[mid] > target```, 对比区间中值和```target```大小
+ ```if``` 执行：```left = mid + 1/right = mid - 1```, 缩小区间，_*左闭右开区间为``rignt= mid``*_
