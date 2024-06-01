# 383. 赎金信

[Leedcode 链接🔗](https://leetcode.cn/problems/ransom-note/description/)  
[Code](https://github.com/alstondu/lc/blob/main/383/383.cpp)

### 题目


给你两个字符串：```ransomNote``` 和 ```magazine``` ，判断 ```ransomNote``` 能不能由 ```magazine``` 里面的字符构成。

如果可以，返回 ```true``` ；否则返回 ```false``` 。

```magazine``` 中的每个字符只能在 ```ransomNote``` 中使用一次。

 

#### 示例 1：

输入：```ransomNote = "a", magazine = "b"```
输出：```false```

#### 示例 2：

输入：```ransomNote = "aa", magazine = "ab"```
输出：```false```

#### 示例 3：

输入：```ransomNote = "aa", magazine = "aab"```
输出：```true```

### 思路

查询字母，数据大小固定可以使用数组。与 [242. 有效的字母异位词](https://github.com/alstondu/lc/tree/main/242) 思路类似。 用一个大小为26的数组储存```magazine``` 中各个字母出现的次数。再遍历 ```ransomNote```中的字母在数组中查询并反向计数，若字母数量出现负数则 ```false``` 。
