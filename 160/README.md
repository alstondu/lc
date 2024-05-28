# 160. 链表相交

[Leedcode 链接🔗](https://leetcode.cn/problems/intersection-of-two-linked-lists/description/)  
[Code](https://github.com/alstondu/lc/blob/main/160/160.cpp)

### 题目

给定两个单链表的头节点 ```headA``` 和 ```headB``` ，请找出并返回两个单链表相交的起始节点。如果两个链表不存在相交节点，返回 ```null``` 。

### 算法 1：重蹈覆辙

```a + c + b = b + c + a```

![fig1](https://github.com/alstondu/lc/blob/main/160/fig1.png)

第一个链表遍历结束去遍历第二个链表， 第二个链表遍历结束去遍历第一个链表，当二者相等时即为两链表相交节点。

### 算法 2： 尾端对齐

令两个链表尾端对齐  ⬅️ 跳过长链表长出短链表的部分使两个指针对齐同时向后移动，直至相等

+ 遍历两个链表以获得对应长度
+ 判断长链，长链表先移动 ```n``` ，```n``` 为两链表长度差
+  两个指针对齐同时向后移动，直至相等

### 算法 2：相连成环

将两个链表首尾相连 ➡️ 问题转换为寻找环形链表成环的第一个节点

⚠️ 需提前储存第一个链表尾部节点，以满足题目不改变链表的要求。

判断成环代码见 [LC. 142](https://github.com/alstondu/lc/blob/main/142/142.cpp)

