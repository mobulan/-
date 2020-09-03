int BST_Insert(BiTree t,KeyType k){			//传入插入的树和元素值
	if (T == NULL){							//如果当前为空则将指向为空
		T = (BiTree)malloc(sizeof(BSTNode))	//则新建节点
		T -> key = k;						//插入数据
		T->lchild = T->rchild = NULL;		//左右孩子初始化
		return 1;							//插入成功
	}
	else if(k == T -> key)					//重复元素
		return 0;							//插入失败
	else if(k > T -> key)					//比当前节点大
		return BST_Insert(T->rchild,k)		//插入到右子树
	else									//比当前节点小
		return BST_Insert(T->lchild,k)		//插入到左子树
}

//二叉排序树构造
void Creat_BST(BiTree &T,KeyType str[],int n){
	T = NULL;								//初始为空值
	for(int i=0;i<n;i++)					//循环插入
		BST_Insert(T,str[i]);
}