# 257. 二叉树的所有路径

[Leedcode 链接🔗](https://leetcode.cn/problems/binary-tree-paths/description/)  
[Code](https://github.com/alstondu/lc/blob/main/257/257.cpp)

### 题目

给定一个二叉树的根节点 ```root``` ，按任意顺序，返回所有从根节点到叶子节点的路径。


### 算法: 递归，回溯，前序遍历


从上到下前序遍历，每条路走到头，储存```path```到```result```，回溯继续走。回溯体现在一条路走到头后递归的过程中，每一个递归到的节点要从```path``` 中 ```pop```出来，以便存入新路径的节点。

#### 递归函数定义方式

1. 引用传入 ```int``` 型 ```path```

 ```c++
void traversal(TreeNode* cur, vector<int>& path, vector<string>& result);
```
	引用传入为抵制拷贝，每次递归 ```path``` 这个 ```vector``` 本身变化，需要在递归返回时将本层的值 ```pop```出来完成回溯。

	在每条路路径走到头后统一将 ```path``` 中的元素转换成 ```string``` 型，并在中间加入 ```"->"```。
	
	⚠️将节点值存入 ```path``` 放在中止处理之前以免遗漏叶子节点。

2. 非引用传入 ```string``` 型 ```path```

	```c++
	void traversal(TreeNode* root, vector<string> path, vector<string>& result);
	```
	非引用传入为数值拷贝，每次递归 ```path``` 这个 ```string``` 本身不变化。
	
	```"->"```存在两种处理方法：
	
	+ 传参的方式添加```"->"``` ，回溯时直接回到之前的 ```path``` 值，不需要额外 ```pop```:
	
	```c++
	if(cur->left) traversal(cur->left, path + "->", result);
	```
	
	+ 每层递归手动添加 ```"->"```，回溯时需要分别 ```pop``` 掉 ```">"``` 和 ```"-"```：
	
	```c++
	if(cur->left){
		path += "->";
		traversal(cur->left, path, result);
		path.pop_back(); // pop out ">"
		path.pop_back(); // pop out "-"
	}
	```


	
	
	
	
