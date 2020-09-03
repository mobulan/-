void *Firstnode(ThreadTree *p)	//返回值是个指针的指针函数
{
	while(p->lchild == 0)		//直到左孩子为空时停止
		p = p->lchild;			//指向左孩子
	return p;
}

void *Nextnode(ThreadTred *p)
{
	if(rtag == 0)						//如果有右孩子
		return Firstnode(p->rchild);	//则找到右子树的最左侧节点
	else
		return p->rchild;				//否则右孩子就指向后继节点
}

void InOrder(ThreadNode *T)				//中序遍历，传入根节点
{
	for(ThreadNode *p=FirstNode(T);p!=0;p=Nextnode(p))
		visit(p);
}