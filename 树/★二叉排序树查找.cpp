BSTNode *BST_Search(BiTree T, ElemType key) {
	while (T != NULL && key != T->data) //如果当前节点非空，数值不等则重复
	{
		if (key > T->data)				//因为是二叉排序树，左侧肯定小于右侧
			T = T->rchild;				//如果值大，则去搜寻右子树
		else							//否则搜寻左子树
			T = T->lchild;
	}
	return T;							//返回找到的节点
}