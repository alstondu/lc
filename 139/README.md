# 139. 单词拆分

[Leedcode 链接🔗](https://leetcode.cn/problems/word-break/description/)  
[Code](https://github.com/alstondu/lc/blob/main/139/139.cpp)

### 题目

给你一个字符串 ```s``` 和一个字符串列表 ```wordDict``` 作为字典。如果可以利用字典中出现的一个或多个单词拼接出 ```s``` 则返回 ```true```。

注意：不要求字典中出现的单词全部都使用，并且字典中的单词可以重复使用。

---

#### 示例：

#### 示例 1：

**输入**: ```s = "leetcode", wordDict = ["leet", "code"]```

**输出**: ```true```

**解释**: 

返回 ```true``` 因为 ```"leetcode"``` 可以由 ```"leet"``` 和 ```"code"``` 拼接成。

#### 示例 2：

**输入**: ```s = "applepenapple", wordDict = ["apple", "pen"]```

**输出**: ```true```

**解释**: 

返回 ```true``` 因为 ```"applepenapple"``` 可以由 ```"apple" "pen" "apple"``` 拼接成。

注意，你可以重复使用字典中的单词。

#### 示例 3：

**输入**: ```s = "catsandog", wordDict = ["cats", "dog", "sand", "and", "cat"]```

**输出**: ```false```

---

### 算法:


1.  ```dp```数组定义：

	  	```dp[i]```：字符串 ```s``` 前 ```i``` 个字符组成的字符串能否被字典中的单词组成。
	  		  	 
2. 递推公式：
	
	用 ```j``` 作为 ```[0, i]```的分割点，如果 ```dp[j]``` 为 ```true```， 且 ```s[j, i]``` 存在于字典中，则 ```dp[i]``` 为 ```true```: ```dp[i] = dp[j] && worldDicSet.find(s.substr(j, i - j)) != worldDicSet.end()```
  
3. ```dp``` 数组初始化：```dp[0]``` 没有意义，应初始化为 ```true```，否则后面都为 ```false```；非 ```0``` 下标应初始化为``` false```。

4. 遍历顺序：
	
	先遍历所给字符串，在所给字符串中用 j 遍历截取。
  
5. 打印```dp```数组
