void PreOrder2(BiTree T)
{
	initStack(S);							//初始化一个空栈
	BitTree p=T;							//初始化操作指针
	EnQueue(T);								//根节点入栈
	while(isEmpty(S) != true)				//栈为空时停止
	{
		DeQueue(p);							//出栈栈顶元素
		visit(p);							//访问该元素
		if(p->rchild != NULL)				//先检查右孩子，不为空则入栈
			EnQueue(p->rchild);
		if(p->lchild != NULL)				//再检查左孩子，不为空则入栈
			EnQueue(p->lchild);
	}