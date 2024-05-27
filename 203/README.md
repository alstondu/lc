# 链表
与数组相比长度可以动态增删，增删时间复杂度 ```O(1)```, 查询时间复杂度 ```O(n)```.  
```C++``` 注意手动清理内存：```delete```  
链表最后一个节点的 ```next``` 为 ```NULL```

### 定义

```c++
struct Listnode{
	int val;  // Value stored on the node
	Listnode *next;  // A pointer of type Listnode, pointing to the next node
	Listnode(int x): val(x), next(NULL){};  // Node constructor
};
```

### 初始化
```c++
Listnode* head = new Listnode(5);
```

# 203. 移除链表元素

[Leedcode 链接🔗](https://leetcode.cn/problems/remove-linked-list-elements/)  
[Code](https://github.com/alstondu/lc/blob/main/203/203.cpp)

### 题目
删除链表中等于给定值 val 的所有节点。输入和返回的都是对应链表的头节点, 类型为 ```Listnode*```。

#### 示例 1： 输入：```head = [1,2,6,3,4,5,6], val = 6``` 输出：```[1,2,3,4,5]```

#### 示例 2： 输入：```head = [], val = 1``` 输出：```[]```

#### 示例 3： 输入：```head = [7,7,7,7], val = 7``` 输出：```[]```


### 虚拟头节点：
添加虚拟头节点来统一各个节点的操作逻辑

```c++
Listnode* dummyHead = new Listnode(0);
dummyHead->next = head;
```
### 算法

遍历链表，若下一个节点的值为目标值，当前节点直接指向下一个节点的下一个节点

+ 添加虚拟头节点，初始化当前节点 ```cur``` 为虚拟节点
+ ```while``` 循环遍历链表，条件为 	```cur``` 的 ```next``` 不为 ```NULL```
+ ```if``` 判断下一节点的值是否为目标值，操作结束后清除删除掉的节点的内存
+ 重新设定 ```dummyHead``` 的下一节点为头节点，清除 ```dummyHead``` 的内存

### 注意⚠️

```cur = cur->next``` 放在 ```else{}``` 里而不是每轮 ```while``` 都执行: 

1. 确保只有当连续的目标值都被去除后才移动 ```cur```
2. 若链表中最后一个元素为目标值，执行 ```cur = cur->next```  会访问空指针，报错 ```Segmentation fault: 11```
