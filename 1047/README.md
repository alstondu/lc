# 1047. 删除字符串中的所有相邻重复项

[Leedcode 链接🔗](https://leetcode.cn/problems/remove-all-adjacent-duplicates-in-string/)  
[Code](https://github.com/alstondu/lc/blob/main/1047/1047.cpp)

### 题目

给出由小写字母组成的字符串 ```S```，重复项删除操作会选择两个相邻且相同的字母，并删除它们。

在 ```S``` 上反复执行重复项删除操作，直到无法继续删除。

在完成所有重复项删除操作后返回最终的字符串。答案保证唯一。

#### 示例：

输入：```"abbaca"```

输出：````"ca"````


### 算法:

用 ````stack``` 记录上一个元素。

遍历字符串，若新的元素和上一个相同，```pop```, 反之 ```push```。把结果栈存回 最重要返还的 ```string```。

### 注意⚠️

+ 处理 ```stack.empty()```
+ 结尾反转字符串
