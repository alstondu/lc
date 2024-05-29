# 哈希表

可通过索引直接访问的数据结构。

_**适用： 快速判断一个元素是否出现集合里**_

### 分类
#### 1. 数组
固定大小
#### 2. set
| 集合               | 底层实现 | 是否有序 | 数值是否可以重复 | 能否更改数值 | 查询效率 | 增删效率 |
| --- | --- | ---- | --- | --- | --- | --- |
| std::set           | 红黑树   | 有序     | 否               | 否           | O(log n) | O(log n) |
| std::multiset      | 红黑树   | 有序     | 是               | 否           | O(logn)  | O(logn)  |
| std::unordered_set | 哈希表   | 无序     | 否               | 否           | O(1)     | O(1)     |

优先使用unordered_set，因为它的查询和增删效率是最优的

集合有序，用set

有序且有重复数据，用multiset

#### 3. map

| 映射               | 底层实现 | 是否有序 | 数值是否可以重复 | 能否更改数值 | 查询效率 | 增删效率 |
| --- | --- | --- | --- | --- | --- | --- |
| std::map           | 红黑树   | key有序  | key不可重复      | key不可修改  | O(logn)  | O(logn)  |
| std::multimap      | 红黑树   | key有序  | key可重复        | key不可修改  | O(log n) | O(log n) |
| std::unordered_map | 哈希表   | key无序  | key不可重复      | key不可修改  | O(1)     | O(1)     |
```map``` 中的存储结构为 ```{key，value}```。 带有相应性质（有/无序，可否重复，能否更改）的量为 ```key```。

```map``` 的 ```insert``` 数据类型为 ```pair```。

eg：

```c++
map.insert(pair<int, int>(nums[i], i));
```

# 242.有效的字母异位词 

[Leedcode 链接🔗](https://leetcode.cn/problems/valid-anagram/description/)  
[Code](https://github.com/alstondu/lc/blob/main/242/242_2.cpp)

### 题目
给定两个字符串 ```s``` 和 ```t``` ，编写一个函数来判断 ```t``` 是否是 ```s``` 的字母异位词。字符串只包含小写字母。

#### 示例 1:
输入: ```s = "anagram", t = "nagaram"``` 输出: ```true```

####示例 2:
 输入: ```s = "rat", t = "car"``` 输出: ```false```


### 算法

定义大小为26的数组储存对应英文字母的数量，分别遍历两个字符串以对出现的字母进行计数增删，结果为零数组表明两个字符串为字母异位词。