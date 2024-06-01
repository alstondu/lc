# km55. 右旋字符串

[Leedcode 链接🔗](https://kamacoder.com/problempage.php?pid=1065)  
[Code](https://github.com/alstondu/lc/blob/main/km55/km55.cpp)

### 题目

给定一个字符串 ```s``` 和一个正整数 ```k```，请编写一个函数，将字符串中的后面 ```k``` 个字符移到字符串的前面，实现字符串的右旋转操作。


#### 示例
输入：```"abcdefg", 2```

输出：```"fgabcde"```


### 算法

1. 将字符串整体翻转
2. 分别翻转前 ```k``` 个元素和剩下的元素


若是左旋字符串则分别翻转前 ```s.size() - k``` 个元素和后 ```k``` 个元素。