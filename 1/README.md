# 1. 两数之和

[Leedcode 链接🔗](https://leetcode.cn/problems/two-sum/)  
[Code](https://github.com/alstondu/lc/blob/main/1/1.cpp)

### 题目
给定一个整数数组 ```nums``` 和一个整数目标值 ```target```，请你在该数组中找出和为目标值 ```target```  的那两个整数，并返回它们的数组下标。

你可以假设每种输入只会对应一个答案。但是，数组中同一个元素在答案里**不能重复**出现。

你可以按**任意顺序**返回答案。

#### 示例 1：

输入：```nums = [2,7,11,15], target = 9```

输出：```[0,1]```

解释：```nums[0] + nums[1] == 9```

#### 示例 2：

输入：```nums = [3,2,4], target = 6```
输出：```[1,2]```

#### 示例 3：

输入：```nums = [3,3], target = 6```
输出：```[0,1]```


### 数据结构选择

数据量不定，不能用数组

如果哈希值比较少、特别分散、跨度非常大，使用数组就造成空间的极大浪费。

元素唯一，无序，需要同时储存值和索引，用 ```unordered_map```

```map``` 中的存储结构为 ```{key，value}``` 。是否唯一，是否有序是 ```key``` 的性质， 因此用 ```key``` 储存数组中出现过的元素，```value``` 储存索引。


### 算法

将 ```nums1``` 输入到 ```unordered_set``` 去重，遍历 ```nums2``` 中元素并将在 ```unordered_set``` 中再次出现的元素存入另一个 ```unordered_set``` ，最终转化回 ```vector``` 。

### 注释

```c++
auto iter = map.find(target - nums[i]);
```
```auto iter``` 返还指向 ```map``` 中对应元素的迭代器。```auto``` 使得编译器自动推导 ```iter``` 的类型，此处为 ```std::unordered_map<int, int>::iterator``` 的简化。

```c++
iter->second
``` 

访问该 ```map``` 元素的 ```value```。