void PreOrder(BiTree T) 		//传入二叉树的根节点地址
{
	if (T != NULL) {
		visit(T); 				//最后访问根节点
		PreOrder(T->lchild); 	//递归访问左孩子
		PreOrder(T->rchild); 	//递归访问右孩子
	}
}