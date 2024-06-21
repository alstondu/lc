# 131. 分割回文串

[Leedcode 链接🔗](https://leetcode.cn/problems/letter-combinations-of-a-phone-number/description/)  
[Code](https://leetcode.cn/problems/palindrome-partitioning/description/)

### 题目

给你一个字符串 ```s```，请你将 ```s``` 分割成一些子串，使每个子串都是回文串。

返回 ```s``` 所有可能的分割方案。

回文字符串： 从前向后和从后向前相同的字符串。



### 算法：

和寻找一个数组中的数字组合是一个原理，只不过分割字符串相当于字母的组合，且可以每次取多个字母。

取多个字母可以通过使用```for```循环在单层内向后移动分割位置来实现。分割位置就是下标，上一层的确定的分割位置可以以递归函数传参的形式成为下一层 ```for```循环的起始位置，也就是 ```startIdx```。

单层内判断当前首末下标截取出的字符串是否回文，是的话再```push```到```path```, 否则不进行递归用```continue```重复```for```循环寻找回文字符串。截取字符串为 ```s.substr(startIdx, i- startIdx + 1)```。

另写 ```bool```类型函数判断当前下表截取的字符串是否回文，双指针从两端遍历判断对称字母是否相等。
