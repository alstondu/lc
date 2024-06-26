# 贪心算法

通过局部最优推导到全局最优。

# 455. 分发饼干

[Leedcode 链接🔗](https://leetcode.cn/problems/assign-cookies/description/)  
[Code](https://github.com/alstondu/lc/blob/main/455/455.cpp)

### 题目

假设你是一位很棒的家长，想要给你的孩子们一些小饼干。但是，每个孩子最多只能给一块饼干。

对每个孩子 ```i```，都有一个胃口值 ```g[i]```，这是能让孩子们满足胃口的饼干的最小尺寸；并且每块饼干``` j```，都有一个尺寸 ```s[j] ```。如果 ```s[j] >= g[i]```，我们可以将这个饼干 ```j``` 分配给孩子 ```i``` ，这个孩子会得到满足。你的目标是尽可能满足越多数量的孩子，并输出这个最大数值。

---

### 示例
#### 示例 1:

**输入**: ```g = [1,2,3], s = [1,1]```

**输出**: ```1```

**解释**: 
你有三个孩子和两块小饼干，```3```个孩子的胃口值分别是：```1,2,3```。虽然你有两块小饼干，由于他们的尺寸都是```1```，你只能让胃口值是```1```的孩子满足。

所以你应该输出1。

---

### 算法：  

大饼干喂大胃口。

排序，```for``` 循环从大到小遍历胃口， 每次循环里用```if``` 判断当前饼干（从大到小）能否满足孩子的胃口。
