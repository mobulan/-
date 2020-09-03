void InOrder(BiTree T) 		//传入二叉树的根节点地址
{
	if (T != NULL) {
		InOrder(T->lchild);	//中序遍历左子树
		visit(T);			//访问个节点
		InOrder(T->rchild);	//中序遍历右子树
	}
}