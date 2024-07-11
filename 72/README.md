# 72. 编辑距离

[Leedcode 链接🔗](https://leetcode.cn/problems/edit-distance/description/)  
[Code](https://github.com/alstondu/lc/blob/main/72/72.cpp)

### 题目

给你两个单词 `word1` 和 `word2`， 请返回将 `word1` 转换成 `word2` 所使用的最少操作数  。

你可以对一个单词进行如下三种操作：

+ 插入一个字符
+ 删除一个字符
+ 替换一个字符

---

#### 示例：

#### 示例 1：

**输入**：`word1 = "horse", word2 = "ros"`

**输出**：`3`

**解释**：

horse -> rorse (将 'h' 替换为 'r')

rorse -> rose (删除 'r')

rose -> ros (删除 'e')

#### 示例 2：

**输入**：`word1 = "intention", word2 = "execution"`

**输出**：`5`

**解释**：

intention -> inention (删除 't')

inention -> enention (将 'i' 替换为 'e')

enention -> exention (将 'n' 替换为 'x')

exention -> exection (将 'n' 替换为 'c')

exection -> execution (插入 'u')

---

### 算法:

 
1.  ```dp```数组定义：
	
	```dp[i][j]```表示使以下标为 `i - 1` 为结尾的 `word1` 和以下标为 `j - 1` 为结尾的 `word2` 相同的最小步数。		  		  	 
2. 递推公式：
	
	遍历两个字符串，如果当前的 `word1[i - 1] == word[j - 1]` 那么不需要做额外的删减，延续之前的最小步数 `dp[i - 1][j - 1]`。
	
	如果二者不相等，word1 有三种操作选择：
	
	删 `word1`, 步数为 `world1[i - 1]` 进来之前的最小步数 + 1， 也就是 `dp[i - 1][j] + 1`；
	
	增` word1`， 和删 world2 的效果是一样的，目的都是使二者相等，所以步数为 `word2[j - 1]` 进来之前的最小步数 + 1， 也就是 `dp[i][j - 1] + 1`，比如 `'ab' `和 `'abc'`，后者删 `'c'` 就等于前者加 `'c'`。
	
	替换元素：之前 `word1[i - 1] == word[j - 1]` 的时候，延续的是`dp[i - 1][j - 1]`，那么现在两个元素不同，只需要额外一步转换两个元素就相同了，所以这种情况下 `dp[i][j] = dp[i - 1][j - 1] + 1`。
	
	以上三种情况取最小。
  
3. ```dp``` 数组初始化：

	因为```dp[i][j]```表示在以 `i - 1` 和 `j - 1`为结尾的字符串，因此遍历时应该从 `i = 1` 和 `j = 1`开始，且 `dp[i][0]` 表示以 `i - 1` 为结尾的 world1，含有 `i` 个元素，删几步能删成空字符串，所以初始化为 `i`，同理 `dp[0][j]` 初始化为 `j`。
	
	其他的元素在没有找到共同字数组时为 `0`，代表重复字数组长度为 `0`。

4. 遍历顺序：
	
	从前向后遍历二维数组，但是边界条件为 `i` 和 `j`，代表下标为 `i - 1` 和 `j - 1` 的元素。
  
5. 打印```dp```数组