# 40.组合总和II

[Leedcode 链接🔗](https://leetcode.cn/problems/combination-sum-ii/description/)  
[Code](https://github.com/alstondu/lc/blob/main/40/40.cpp)

### 题目

给定一个候选人编号的集合 ```candidates``` 和一个目标数 ```target``` ，找出 ```candidates``` 中所有可以使数字和为 ```target``` 的组合。

```candidates``` 中的每个数字在每个组合中只能使用一次 。

⚠️ 本题中集合中有重复元素。



### 算法：

```result```中的 ```path``` 不能重复，但是 ```path``` 中可以重复使用相同数值的元素。

纵向取值是合法的。但是横向取值需要去重以免形成不同排列的相同组合。

**纵向递归：**

每一层选择一个上一层没有取到过的元素 （```startidx```），加入 ```path```并回溯

通过递归传递的数字索引确定当前的数字。

用```vector<bool>```类型的数组 ```used``` 记录 ```candidate```中的数字在纵向递归时是否取到过。


**横向 ```for``` 循环：**

```for``` 循环遍历 ```candidate```中的数字，如果当前的数字和前一个相同，且 ```used``` 中的上一个元素没有取到过（排除因纵向递归重复导致的元素重复的情况），```continue```。


