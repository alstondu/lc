# 206. 反转链表

[Leedcode 链接🔗](https://leetcode.cn/problems/reverse-linked-list/)  
[Code](https://github.com/alstondu/lc/blob/main/206/206.cpp)

### 题目
反转一个单链表。

#### 示例: 
输入: ```1->2->3->4->5->NULL``` 输出: ```5->4->3->2->1->NULL```


### 算法: 双指针
遍历所有节点，使每一节点的 ```next``` 指向其前一个节点。

+ 定义指针 ```cur``` 和 ```pre``` ，分别指向头节点和 ```NULL```, 代表当前节点和其前一节点。  
+ 利用 ```while``` 循环遍历链表中的节点，直至 ```cur == NULL``` ：  
	利用 ```tmp``` 储存 ```cur->next```  
	将 ```cur->next``` 指向 ```pre```  
	向右移动 ```pre``` 和 ```cur``` （⚠️ 先移动 ```pre``` 以免丢失 ```cur```） 
	
+ 返还最终头节点 ```pre``` 。

### 算法: 递归
利用 ```reverse()``` 函数为 ```cur``` 和 ```pre``` 赋值，并在函数内调用自身以起到循环的作用， 直至 ```cur == NULL``` 。

