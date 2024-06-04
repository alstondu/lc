# 347. 前 K 个高频元素

[Leedcode 链接🔗](https://leetcode.cn/problems/top-k-frequent-elements/description/)  
[Code](https://github.com/alstondu/lc/blob/main/347/347.cpp)

### 题目
给你一个整数数组 ```nums``` 和一个整数 ```k``` ，请你返回其中出现频率前 ```k``` 高的元素。你可以按任意顺序返回答案。

#### 示例 1: 
输入: ```nums = [1,1,1,2,2,3], k = 2```

输出: ```[1,2]```


### 算法:

1. 统计元素出现频率（```unordered_map```）
2. 对频率排序 (```priority_queue```)
3. 找出前K个高频元素 (小顶堆剩余的元素)
