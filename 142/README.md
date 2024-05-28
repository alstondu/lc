# 142. 环形链表II

[Leedcode 链接🔗](https://leetcode.cn/problems/linked-list-cycle-ii/description/)  
[Code](https://github.com/alstondu/lc/blob/main/142/142.cpp)

### 题目

给定一个链表的头节点 ```head``` ，返回链表开始入环的第一个节点。 如果链表无环，则返回 ```null```。

如果链表中有某个节点，可以通过连续跟踪 ```next``` 指针再次到达，则链表中存在环。

### 思路：
如图， 快指针每次走两个节点，慢指针一个，慢指针被快指针环内包圈：

![fig](https://github.com/alstondu/lc/blob/main/142/fig.png)

$$
\begin{equation}
2(x + y) = x+ n(y + z) \quad n \geq 1
\end{equation}
$$
➡️
$$
\begin{equation}
x = z + (n - 1)(y + z)
\end{equation}
$$
头节点出发的指针和相遇点出发的指针相遇时的节点即为环的入口节点。


### 算法: 快慢指针
+ 外层 ```while``` 循环：以 ```fast != NULL && fast->next != NULL``` 为条件持续推进快指针， 条件不满足则链表遍历结束，未发现环。
+ ```while``` 循环内快指针前进两步，慢指针一步，```if```  二者相等代表相遇。
+  ```if`` 内建立两个指针分别指向头节点和相遇节点， 利用 ```while``` 判断二者相遇，返还任一节点。


