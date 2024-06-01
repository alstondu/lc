# 151. 反转字符串中的单词


[Leedcode 链接🔗](https://leetcode.cn/problems/reverse-words-in-a-string/)  
[Code](https://github.com/alstondu/lc/blob/main/151/151.cpp)

### 题目

给定一个字符串，逐个翻转字符串中的每个单词。

#### 示例 1：
输入: ```"the sky is blue"```

输出: ```"blue is sky the"```

#### 示例 2：
输入: ```"  hello world!  "```

输出: ```"world! hello"```

解释: 输入字符串可以在前面或者后面包含多余的空格，但是反转后的字符不能包括。

#### 示例 3：
输入: ```"a good   example"```

输出: ```"example good a"```

解释: 如果两个单词间有多余的空格，将反转后单词间的空格减少到只含一个


### 算法：双指针

+ 去除字符串中所有多余的空格（```removeExtraSpaces()```）
+ 将字符串全部翻转（```reverse()```）
+ 将每个单词再次翻转

#### 去除空格
原理和[Lc 27. 移除数组中的元素](https://github.com/alstondu/lc/blob/main/27/README.md)相同（视空格为需要移除的元素）。但是需要在除了第一个单词以外的每一个单词前保留一个空格。


