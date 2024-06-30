# 968. 监控二叉树

[Leedcode 链接🔗](https://leetcode.cn/problems/binary-tree-cameras/description/)  
[Code](https://github.com/alstondu/lc/blob/main/968/968.cpp)

### 题目

给定一个二叉树，我们在树的节点上安装摄像头。

节点上的每个摄影头都可以监视其父对象、自身及其直接子对象。

计算监控树的所有节点所需的最小摄像头数量

---

### 示例

#### 示例 1：

<img alt="" src="https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2018/12/29/bst_cameras_02.png" style="height: 312px; width: 139px;">

**输入**：```[0,0,null,0,null,0,null,null,0]```

**输出**：```2```

**解释**：

需要至少两个摄像头来监视树的所有节点。上图显示了摄像头放置的有效位置之一。 

#### 示例 2：

**输入**：```s = "eccbbbbdec"```

**输出**：```[10]```

---

### 算法：  

叶子节点的父节点放摄像头，往上每隔两个节点放一个摄像头。从下往上，后序遍历。

需要记录每个节点的状态。

	0: 无覆盖
	1: 有摄像头
	2: 有覆盖

后序遍历，根据左右子节点的状态确定父节点的状态。

空节点要设置为有覆盖状态，才能跳过叶子节点去装摄像头。

当前节点的状态判断方式：
	
1. 左右子节点都有覆盖，则当前节点无覆盖
2. 左右子节点至少有一个无覆盖，当前节点装摄像头（优先级高于下一种情况，先判断）
3. 左右孩子至少有一个有摄像头，当前节点有覆盖
4. 遍历完了如果根节点还是无覆盖，则放一个摄像头（主函数判断）