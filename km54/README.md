# km54. 替换数字

[Leedcode 链接🔗](https://kamacoder.com/problempage.php?pid=1064)  
[Code](https://github.com/alstondu/lc/blob/main/km54/km54.cpp)

### 题目

给定一个字符串 ```s```，它包含小写字母和数字字符，请编写一个函数，将字符串中的字母字符保持不变，而将每个数字字符替换为```'number'```。

#### 示例

输入：```'a1b2c3'```

输出：```'anumberbnumbercnumber'```


### 算法

给数组扩容, 从后向前覆盖。

好处：

1. 不需要申请新的数组
2. 避免了从前向后填充元素时，每次添加元素都要将添加元素之后的所有元素向后移动的问题。