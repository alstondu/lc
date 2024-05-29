# 349. 两个数组的交集 

[Leedcode 链接🔗](https://leetcode.cn/problems/intersection-of-two-arrays/description/)  
[Code](https://github.com/alstondu/lc/blob/main/349/349_2.cpp)

### 题目
给定两个数组 ```nums1``` 和 ```nums2``` ，返回它们的交集。

输出结果中的每个元素一定是 **唯一** 的。可以 **不考虑** 输出结果的顺序。

 

#### 示例 1：

输入：```nums1 = [1,2,2,1], nums2 = [2,2]```
输出：```[2]```

#### 示例 2：

输入：```nums1 = [4,9,5], nums2 = [9,4,9,8,4]```
输出：```[9,4]``` 或者 ```[4,9]```


### 数据结构选择
数据量不定，不能用数组

如果哈希值比较少、特别分散、跨度非常大，使用数组就造成空间的极大浪费。

元素唯一，无序， 用 ```unordered_set``` ，读写效率高

### 算法

将 ```nums1``` 输入到 ```unordered_set``` 去重，遍历 ```nums2``` 中元素并将在 ```unordered_set``` 中再次出现的元素存入另一个 ```unordered_set``` ，最终转化回 ```vector``` 。

### 注释

```c++
if (nums_set.find(num) != nums_set.end())
```
```if (nums_set.find(num)``` 返还指向元素 ```num``` 的指针， ```nums_set.end())``` 返还指向集合尾部元素下一位置的指针。若二者不相等，证明集合在被完全遍历前停止，```num``` 存在于集合中。
