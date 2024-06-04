# 150. 逆波兰表达式求值

[Leedcode 链接🔗](https://leetcode.cn/problems/evaluate-reverse-polish-notation/description/)  
[Code](https://github.com/alstondu/lc/blob/main/150/150.cpp)

### 题目

**逆波兰表示法** 便于计算机从左到右进行顺序计算。

给你一个字符串数组 ```tokens``` ，表示一个根据 **逆波兰表示法** 表示的算术表达式。

请你计算该表达式。返回一个表示表达式值的整数。

#### 示例：

输入：```tokens = ["2","1","+","3","*"]```

输出：```9```

解释：该算式转化为常见的中缀算术表达式为：$((2 + 1) \times 3) = 9$


### 算法:

遍历 ```token```, 若为数组则存入栈，若为运算符则取出栈顶两个元素，将其运算后的结果存入栈。

最终栈顶元素（唯一）即为结果。
