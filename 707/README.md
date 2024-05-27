# 707. 设计链表

[Leedcode 链接🔗](https://leetcode.cn/problems/design-linked-list/)  
[Code](https://github.com/alstondu/lc/blob/main/707/707.cpp)

### 题目
在链表类中实现这些功能：

+ ```get(index)```：获取链表中第 ```index``` 个节点的值。如果索引无效，则返回```-1```。
+ ```addAtHead(val)```：在链表的第一个元素之前添加一个值为 ```val``` 的节点。插入后，新节点将成为链表的第一个节点。
+ ```addAtTail(val)```：将值为 ```val``` 的节点追加到链表的最后一个元素。
+ ```addAtIndex(index,val)```：在链表中的第 ```index``` 个节点**_之前_**添加值为 ```val```  的节点。如果 ```index``` 等于链表的长度，则该节点将附加到链表的末尾。如果 ```index``` 大于链表长度，则不会插入节点。如果```index```小于```0```，则在头部插入节点。
+ ```deleteAtIndex(index)```：如果索引 ```index``` 有效，则删除链表中的第 ```index``` 个节点。

起始为空链表： ```_size = 0```


### 算法

+ ```get(index)```：遍历列表至第 ```index``` 个节点，返还该节点的值  
 ⚠️ 排查非法 ```index```（过大/过小）， 链表头节点 ```index = 0```， 带入该边界值可确定 ```cur``` 初始指向。
+ ```addAtHead(val)```：创建新节点，使其 ```next``` 指向虚拟头节点的下一节点。令虚拟头节点指向该新节点。  
⚠️ 先 ```newnode->next = _dummyHead->next;``` , 再 ```_dummyHead->next = newnode;``` 。反之则无法定位 ```_dummyHead->next``` 。
+ ```addAtTail(val)```：遍历到最后一个节点，令其指向新创建的节点。
+ ```addAtIndex(index,val)```：排查非法 ```index```，创建新节点，遍历列表至第 ```index - 1``` 个节点，使其 ```next``` 指向当前节点的下一节点。令当前节点指向新节点。  
⚠️ ```cur``` 初始化指向 ```_dummyNode``` 而不是  ```_dummyNode->next``` , 使得遍历结束时 ```cur``` 指向 ```index``` 前一个节点。
+ ```deleteAtIndex(index)```：排查非法 ```index```，遍历列表至第 ```index - 1``` 个节点，使当前节点直接指向下一个节点的下一个节点
 ⚠️ ```tmp=nullptr;``` 避免被释放后的内存变为随机野指针， 为后续访问带来隐患。