void PostOrder(BiTree T) 		//传入二叉树的根节点地址
{
	if (T != NULL) {
		PostOrder(T->lchild);	//后序访问左子树
		PostOrder(T->rchild);	//后续访问右子树
		visit(T);				//访问根节点
	}
}