# 583. 两个字符串的删除操作

[Leedcode 链接🔗](https://leetcode.cn/problems/delete-operation-for-two-strings/description/)  
[Code](https://github.com/alstondu/lc/blob/main/583/583.cpp)

### 题目

给定两个单词 `word1` 和 `word2` ，返回使得 `word1` 和  `word2` 相同所需的最小步数。

每步 可以删除任意一个字符串中的一个字符。

---

#### 示例：

#### 示例 1：

**输入**: `word1 = "sea", word2 = "eat"`

**输出**: `2`

**解释**: `第一步将 "sea" 变为 "ea" ，第二步将 "eat "变为 "ea"`

#### 示例  2:

**输入**：`word1 = "leetcode", word2 = "etco"`

**输出**：`4`

---

### 算法 1:

本题可以先求 [Lc 1143. 最长公共子序列](https://github.com/alstondu/lc/blob/main/1143/README.md)，然后用两个字符串的长度加起来和它做差得来。

### 算法 2:
 
1.  ```dp```数组定义：
	
	```dp[i][j]```表示使以下标为 `i - 1` 为结尾的 `word1` 和以下标为 `j - 1` 为结尾的 `word2` 相同的最小步数。		  		  	 
2. 递推公式：
	
	遍历两个字符串，如果当前的 `word1[i - 1] == word[j - 1]` 那么不需要做额外的删减，延续之前的最小步数 `dp[i - 1][j - 1]`。
	
	如果二者不相等，那么要么删 `word1`, 步数为 `world1[i - 1]` 进来之前的最小步数 + 1， 也就是 `dp[i - 1][j] + 1`；要么删 `word2`，步数为 `word2[j - 1]` 进来之前的最小步数 + 1， 也就是 `dp[i][j - 1] + 1`，二者取最小。
  
3. ```dp``` 数组初始化：

	因为```dp[i][j]```表示在以 `i - 1` 和 `j - 1`为结尾的字符串，因此遍历时应该从 `i = 1` 和 `j = 1`开始，且 `dp[i][0]` 表示以 `i - 1` 为结尾的 world1，含有 `i` 个元素，删几步能删成空字符串，所以初始化为 `i`，同理 `dp[0][j]` 初始化为 `j`。
	
	其他的元素在没有找到共同字数组时为 `0`，代表重复字数组长度为 `0`。

4. 遍历顺序：
	
	从前向后遍历二维数组，但是边界条件为 `i` 和 `j`，代表下标为 `i - 1` 和 `j - 1` 的元素。
  
5. 打印```dp```数组