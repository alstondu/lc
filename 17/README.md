# 17. 电话号码的字母组合

[Leedcode 链接🔗](https://leetcode.cn/problems/letter-combinations-of-a-phone-number/description/)  
[Code](https://github.com/alstondu/lc/blob/main/17/17.cpp)

### 题目
给定一个仅包含数字 ```2-9``` 的字符串，返回所有它能表示的字母组合。答案可以按任意顺序返回。

给出数字到字母的映射如下（与电话按键相同）。注意 ```1``` 不对应任何字母。

<img src="https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2021/11/09/200px-telephone-keypad2svg.png" style="width: 200px;">



### 算法：

**纵向递归：**

每一层选择一个数字。

通过递归传递的数字索引确定当前的数字。

**横向 ```for``` 循环：**

将数字 map 到对应的字母。

对于当前数字，遍历其对应的字母。

⚠️ 额外处理一下输入为空
