# 39. 组合总和

[Leedcode 链接🔗](https://leetcode.cn/problems/combination-sum/description/)  
[Code](https://github.com/alstondu/lc/blob/main/39/39.cpp)

### 题目

给定一个无重复元素的数组 ```candidates``` 和一个目标数 ```target``` ，找出 ```candidates``` 中所有可以使数字和为 ```target``` 的组合。

```candidates``` 中的数字可以无限制重复被选取。

### 示例

#### 示例 1：

**输入**：```candidates = [2,3,6,7], target = 7```

**输出：** ```[ [7], [2,2,3] ]```

#### 示例 2：

**输入：** ```candidates = [2,3,5], target = 8```

**输出：** ```[ [2,2,2,2], [2,3,3], [3,5] ]```


### 算法：

### 算法：

**横向 ```for``` 循环**（单层逻辑）：

遍历数组内包括上层数字在内（可以重复）未取到过的数字和（组合不强调顺序）。

利用 ```startIdx``` 来限制循环遍历的范围，传入当前数字，```for``` 循环的 iterator  ```i```。


**纵向递归：**

每一层向下递归将 ```for``` 循环遍历到的数字存入```path```, 直到数组内元素数量等于 ```k```，```return```（中止条件）。

回溯：递归回到上层后需要将之间存入的元素 ```pop```出来。
